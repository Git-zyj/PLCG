#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 351107546419424888ULL;
int var_2 = -1633971682;
unsigned long long int var_6 = 6100391533283809261ULL;
int var_7 = -505014296;
unsigned char var_10 = (unsigned char)100;
int var_11 = -1665533358;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)84;
signed char var_18 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
