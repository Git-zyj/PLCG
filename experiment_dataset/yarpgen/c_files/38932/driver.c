#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15973711337912312051ULL;
unsigned char var_2 = (unsigned char)220;
unsigned long long int var_3 = 7628628883368084476ULL;
unsigned long long int var_6 = 18433129576066686526ULL;
unsigned char var_7 = (unsigned char)71;
short var_8 = (short)27214;
long long int var_9 = -1105947549438436574LL;
int zero = 0;
unsigned short var_12 = (unsigned short)2096;
unsigned char var_13 = (unsigned char)10;
unsigned char var_14 = (unsigned char)214;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
