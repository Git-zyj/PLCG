#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1670226531U;
unsigned long long int var_1 = 13620547369911365777ULL;
signed char var_2 = (signed char)-26;
unsigned char var_8 = (unsigned char)254;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 5661557237056973236ULL;
int var_14 = -590907361;
short var_15 = (short)11854;
unsigned long long int var_16 = 5436366471944877558ULL;
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
