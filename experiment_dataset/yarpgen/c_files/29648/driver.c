#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
unsigned long long int var_6 = 13966498964991972382ULL;
unsigned short var_13 = (unsigned short)40400;
int zero = 0;
signed char var_18 = (signed char)-4;
unsigned short var_19 = (unsigned short)29234;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
