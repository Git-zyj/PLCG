#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7354;
int var_4 = -1404267022;
unsigned short var_8 = (unsigned short)14151;
unsigned short var_10 = (unsigned short)27251;
int zero = 0;
unsigned int var_19 = 2496016848U;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
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
