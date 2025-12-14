#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16245896511166424671ULL;
unsigned char var_3 = (unsigned char)10;
signed char var_4 = (signed char)110;
int zero = 0;
unsigned char var_12 = (unsigned char)235;
signed char var_13 = (signed char)22;
unsigned char var_14 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
