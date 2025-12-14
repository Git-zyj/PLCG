#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
signed char var_3 = (signed char)-99;
signed char var_5 = (signed char)17;
short var_6 = (short)-17386;
short var_7 = (short)13140;
unsigned int var_9 = 2185887344U;
int zero = 0;
unsigned int var_11 = 931045394U;
unsigned long long int var_12 = 17481019176539636152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
