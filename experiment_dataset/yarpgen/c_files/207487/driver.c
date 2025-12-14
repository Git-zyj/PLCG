#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10133;
unsigned short var_12 = (unsigned short)3450;
long long int var_13 = 7299152294306998277LL;
unsigned short var_14 = (unsigned short)913;
unsigned char var_15 = (unsigned char)111;
long long int var_18 = -4811266083931290201LL;
int zero = 0;
long long int var_20 = 7105560181370117000LL;
unsigned int var_21 = 2101443627U;
signed char var_22 = (signed char)-106;
unsigned char var_23 = (unsigned char)63;
void init() {
}

void checksum() {
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
