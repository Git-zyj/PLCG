#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-106;
unsigned int var_5 = 2611270057U;
int zero = 0;
unsigned short var_12 = (unsigned short)19392;
signed char var_13 = (signed char)-98;
unsigned char var_14 = (unsigned char)184;
unsigned short var_15 = (unsigned short)45371;
void init() {
}

void checksum() {
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
