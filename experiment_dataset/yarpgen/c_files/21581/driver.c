#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1348368517U;
short var_2 = (short)16858;
signed char var_11 = (signed char)5;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1010272789176488783ULL;
signed char var_14 = (signed char)-9;
_Bool var_15 = (_Bool)1;
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
