#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3335851544U;
int var_10 = -398047517;
unsigned long long int var_17 = 17999571401476999560ULL;
int zero = 0;
int var_18 = -43829989;
unsigned long long int var_19 = 13340607658390777676ULL;
short var_20 = (short)1478;
unsigned int var_21 = 1370470335U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
