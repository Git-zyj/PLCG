#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2213206690U;
unsigned char var_8 = (unsigned char)196;
signed char var_9 = (signed char)36;
unsigned char var_10 = (unsigned char)161;
short var_12 = (short)13396;
int zero = 0;
signed char var_14 = (signed char)9;
unsigned char var_15 = (unsigned char)203;
unsigned int var_16 = 1980741408U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
