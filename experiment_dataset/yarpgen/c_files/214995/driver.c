#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 67883499;
unsigned long long int var_2 = 10512824440199938751ULL;
signed char var_7 = (signed char)89;
unsigned long long int var_8 = 18412743335004884090ULL;
long long int var_13 = -1336572585230265782LL;
long long int var_15 = 527564175363773392LL;
signed char var_16 = (signed char)70;
int zero = 0;
unsigned short var_20 = (unsigned short)34767;
short var_21 = (short)2812;
short var_22 = (short)-20459;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
