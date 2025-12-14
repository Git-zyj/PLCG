#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7999174128543575977ULL;
unsigned long long int var_4 = 5809646243727173578ULL;
unsigned int var_5 = 2238335783U;
unsigned long long int var_13 = 12755818921443688820ULL;
short var_14 = (short)15413;
unsigned int var_15 = 2819102902U;
signed char var_17 = (signed char)-10;
short var_19 = (short)10603;
int zero = 0;
signed char var_20 = (signed char)-94;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)61713;
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
