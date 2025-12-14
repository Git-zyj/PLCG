#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 387380600U;
unsigned short var_3 = (unsigned short)28593;
unsigned int var_4 = 3882860264U;
unsigned int var_8 = 2127154236U;
unsigned int var_10 = 1227386191U;
int zero = 0;
short var_13 = (short)-28864;
unsigned long long int var_14 = 8808840729894663864ULL;
unsigned int var_15 = 3587229091U;
unsigned long long int var_16 = 5026398436315714002ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
