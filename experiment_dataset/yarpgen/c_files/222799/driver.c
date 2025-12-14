#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11697;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 4044031676U;
unsigned long long int var_8 = 5954575075590025411ULL;
unsigned char var_9 = (unsigned char)90;
unsigned long long int var_11 = 3467954415341473699ULL;
unsigned long long int var_15 = 4647624188140539038ULL;
int var_17 = 2010844989;
int zero = 0;
int var_18 = -632354546;
int var_19 = -1112736824;
unsigned long long int var_20 = 8089807578963318898ULL;
_Bool var_21 = (_Bool)1;
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
