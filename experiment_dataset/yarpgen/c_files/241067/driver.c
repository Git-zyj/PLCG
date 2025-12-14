#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned char var_6 = (unsigned char)1;
unsigned int var_7 = 555550029U;
unsigned long long int var_10 = 12415369077590656185ULL;
int zero = 0;
short var_18 = (short)-10169;
int var_19 = 650523038;
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
