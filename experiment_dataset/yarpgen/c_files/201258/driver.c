#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)88;
unsigned short var_4 = (unsigned short)17280;
long long int var_6 = -8218365326130492781LL;
unsigned int var_7 = 2622083582U;
signed char var_8 = (signed char)72;
int zero = 0;
unsigned char var_10 = (unsigned char)252;
int var_11 = -1732671812;
unsigned char var_12 = (unsigned char)142;
signed char var_13 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
