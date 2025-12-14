#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -493066418;
short var_13 = (short)-21377;
int zero = 0;
unsigned int var_17 = 1118719986U;
unsigned char var_18 = (unsigned char)44;
unsigned short var_19 = (unsigned short)9746;
signed char var_20 = (signed char)-101;
void init() {
}

void checksum() {
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
