#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8737461089041591508LL;
_Bool var_3 = (_Bool)0;
long long int var_6 = -2201073863699498770LL;
int zero = 0;
long long int var_12 = -3850934782475686445LL;
unsigned char var_13 = (unsigned char)192;
void init() {
}

void checksum() {
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
