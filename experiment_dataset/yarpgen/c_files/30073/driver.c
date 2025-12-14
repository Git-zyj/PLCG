#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14530640648871023855ULL;
signed char var_7 = (signed char)-102;
unsigned char var_8 = (unsigned char)159;
unsigned int var_10 = 1726089695U;
int zero = 0;
unsigned char var_16 = (unsigned char)3;
signed char var_17 = (signed char)126;
unsigned int var_18 = 4168178973U;
unsigned char var_19 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
