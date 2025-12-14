#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-50;
int var_6 = 1278457977;
int var_8 = 1702445795;
int var_13 = 65762993;
unsigned long long int var_16 = 1668401110537249017ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)9410;
int var_21 = 1120597184;
int var_22 = 68162847;
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
