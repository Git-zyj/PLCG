#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12773;
signed char var_7 = (signed char)13;
int var_12 = -955174931;
unsigned short var_14 = (unsigned short)34507;
int zero = 0;
signed char var_15 = (signed char)-59;
unsigned char var_16 = (unsigned char)122;
int var_17 = 1221039920;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
