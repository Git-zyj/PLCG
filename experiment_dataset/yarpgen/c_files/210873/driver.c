#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-31209;
unsigned int var_9 = 296687439U;
signed char var_11 = (signed char)70;
long long int var_13 = -4682714008181725849LL;
short var_16 = (short)3287;
int zero = 0;
unsigned int var_19 = 3165893911U;
signed char var_20 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
