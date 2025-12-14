#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14900092364329117491ULL;
unsigned short var_4 = (unsigned short)41439;
int var_7 = -1964964987;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 497434526U;
unsigned short var_11 = (unsigned short)882;
signed char var_12 = (signed char)-47;
int zero = 0;
unsigned short var_13 = (unsigned short)57990;
unsigned short var_14 = (unsigned short)14445;
unsigned int var_15 = 276265323U;
short var_16 = (short)11997;
unsigned long long int var_17 = 6282461030236207366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
