#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3668196904U;
unsigned char var_5 = (unsigned char)66;
unsigned char var_9 = (unsigned char)115;
int zero = 0;
unsigned int var_18 = 1165135342U;
short var_19 = (short)-18608;
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
