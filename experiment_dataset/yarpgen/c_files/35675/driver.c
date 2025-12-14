#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
signed char var_3 = (signed char)29;
short var_9 = (short)-32252;
unsigned char var_13 = (unsigned char)54;
int zero = 0;
unsigned int var_17 = 3433963307U;
unsigned char var_18 = (unsigned char)20;
unsigned int var_19 = 872772355U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
