#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned int var_3 = 3392524726U;
int var_5 = 1702831186;
signed char var_8 = (signed char)36;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
unsigned int var_11 = 799830646U;
unsigned int var_12 = 2464408891U;
unsigned long long int var_13 = 16541949260517533132ULL;
int var_14 = 681155557;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
