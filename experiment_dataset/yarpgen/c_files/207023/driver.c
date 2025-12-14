#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
unsigned int var_6 = 3367013221U;
short var_12 = (short)-10985;
signed char var_13 = (signed char)51;
int zero = 0;
unsigned short var_15 = (unsigned short)54529;
unsigned short var_16 = (unsigned short)16713;
short var_17 = (short)-24623;
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
