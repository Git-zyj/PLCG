#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11680;
unsigned char var_5 = (unsigned char)32;
long long int var_6 = -5965461378582434444LL;
unsigned int var_11 = 3538673928U;
unsigned int var_13 = 1693926621U;
long long int var_14 = -7925313850988078809LL;
unsigned int var_15 = 3252242153U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6723806050790186529LL;
long long int var_18 = 6159888187601291531LL;
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
