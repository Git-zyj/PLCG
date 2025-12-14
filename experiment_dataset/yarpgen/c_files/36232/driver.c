#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3957119177135249009ULL;
signed char var_8 = (signed char)8;
unsigned short var_9 = (unsigned short)51418;
int zero = 0;
unsigned short var_10 = (unsigned short)9656;
unsigned char var_11 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
