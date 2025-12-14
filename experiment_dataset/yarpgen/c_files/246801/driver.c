#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1040156746;
int var_2 = -1674165901;
signed char var_3 = (signed char)-69;
unsigned int var_7 = 1503926312U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)12050;
signed char var_14 = (signed char)120;
_Bool var_15 = (_Bool)1;
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
