#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1257313999;
unsigned int var_2 = 3733962961U;
short var_6 = (short)14155;
unsigned char var_7 = (unsigned char)158;
unsigned char var_9 = (unsigned char)87;
int zero = 0;
unsigned int var_10 = 136421560U;
int var_11 = -1293454404;
unsigned char var_12 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
