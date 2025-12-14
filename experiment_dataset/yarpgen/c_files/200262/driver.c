#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
signed char var_1 = (signed char)19;
unsigned short var_2 = (unsigned short)51136;
signed char var_4 = (signed char)99;
unsigned short var_5 = (unsigned short)21349;
unsigned short var_6 = (unsigned short)44474;
unsigned short var_8 = (unsigned short)12185;
unsigned short var_9 = (unsigned short)1897;
unsigned short var_10 = (unsigned short)38007;
int zero = 0;
unsigned short var_11 = (unsigned short)26831;
signed char var_12 = (signed char)4;
unsigned short var_13 = (unsigned short)43532;
unsigned short var_14 = (unsigned short)41062;
signed char var_15 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
