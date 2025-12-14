#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
unsigned char var_2 = (unsigned char)78;
long long int var_9 = 1746635838670509015LL;
unsigned long long int var_10 = 5472831665332609887ULL;
unsigned long long int var_12 = 17086778176843546453ULL;
unsigned long long int var_14 = 16641767429507703293ULL;
int zero = 0;
unsigned long long int var_19 = 17973082340576498441ULL;
unsigned char var_20 = (unsigned char)248;
unsigned long long int var_21 = 13243816819752984250ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
