#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15111399008213556140ULL;
int var_3 = 900172954;
int var_6 = -1727384852;
unsigned char var_8 = (unsigned char)51;
int var_9 = -269926449;
short var_10 = (short)-30343;
long long int var_11 = 5456538669023682165LL;
short var_13 = (short)-411;
unsigned int var_18 = 139903946U;
int zero = 0;
short var_19 = (short)-584;
unsigned long long int var_20 = 7287099783843370098ULL;
unsigned char var_21 = (unsigned char)98;
unsigned char var_22 = (unsigned char)95;
int var_23 = 973616508;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
