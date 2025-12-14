#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned int var_1 = 3813811301U;
short var_6 = (short)-13894;
signed char var_8 = (signed char)6;
unsigned long long int var_11 = 15142563109521807277ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60432;
short var_13 = (short)3835;
void init() {
}

void checksum() {
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
