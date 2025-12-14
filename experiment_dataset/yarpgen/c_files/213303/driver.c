#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-34;
signed char var_3 = (signed char)-77;
unsigned int var_6 = 3627828783U;
unsigned short var_10 = (unsigned short)37678;
int zero = 0;
unsigned char var_13 = (unsigned char)55;
unsigned short var_14 = (unsigned short)41165;
unsigned char var_15 = (unsigned char)172;
void init() {
}

void checksum() {
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
