#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12714;
unsigned short var_1 = (unsigned short)51631;
unsigned char var_2 = (unsigned char)230;
short var_4 = (short)11170;
short var_9 = (short)-13094;
int zero = 0;
signed char var_10 = (signed char)30;
short var_11 = (short)-23356;
signed char var_12 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
