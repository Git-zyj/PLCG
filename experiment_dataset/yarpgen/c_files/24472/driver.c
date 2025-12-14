#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2735747663U;
signed char var_5 = (signed char)49;
unsigned char var_6 = (unsigned char)139;
unsigned char var_7 = (unsigned char)41;
unsigned int var_8 = 2157229548U;
int zero = 0;
unsigned char var_16 = (unsigned char)227;
signed char var_17 = (signed char)91;
unsigned char var_18 = (unsigned char)194;
unsigned char var_19 = (unsigned char)3;
short var_20 = (short)32156;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
