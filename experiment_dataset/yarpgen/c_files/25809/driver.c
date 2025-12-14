#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47092;
unsigned short var_4 = (unsigned short)3604;
unsigned short var_5 = (unsigned short)13097;
unsigned int var_7 = 2963244273U;
unsigned short var_8 = (unsigned short)34570;
int zero = 0;
signed char var_10 = (signed char)26;
short var_11 = (short)8865;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
