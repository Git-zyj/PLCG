#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16457147973000905465ULL;
unsigned int var_3 = 3766353892U;
signed char var_4 = (signed char)-44;
unsigned short var_7 = (unsigned short)61231;
signed char var_8 = (signed char)-81;
int zero = 0;
unsigned short var_10 = (unsigned short)41237;
unsigned int var_11 = 1205135752U;
unsigned short var_12 = (unsigned short)31431;
unsigned short var_13 = (unsigned short)59402;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
