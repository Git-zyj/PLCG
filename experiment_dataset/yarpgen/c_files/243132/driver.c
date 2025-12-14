#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3367188498U;
long long int var_1 = -5995447636336242793LL;
unsigned char var_4 = (unsigned char)53;
unsigned char var_6 = (unsigned char)128;
unsigned int var_7 = 1435259061U;
unsigned char var_8 = (unsigned char)214;
int zero = 0;
signed char var_12 = (signed char)-47;
unsigned char var_13 = (unsigned char)127;
unsigned char var_14 = (unsigned char)172;
unsigned char var_15 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
