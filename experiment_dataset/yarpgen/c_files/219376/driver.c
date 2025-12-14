#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32483;
unsigned char var_5 = (unsigned char)81;
unsigned char var_8 = (unsigned char)35;
unsigned long long int var_13 = 8344030539472503154ULL;
int var_15 = -1823652510;
int zero = 0;
unsigned short var_16 = (unsigned short)29458;
unsigned long long int var_17 = 8244710402278188251ULL;
void init() {
}

void checksum() {
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
