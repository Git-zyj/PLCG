#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)171;
unsigned short var_8 = (unsigned short)53959;
int zero = 0;
unsigned long long int var_10 = 2904405143719640192ULL;
signed char var_11 = (signed char)-88;
unsigned short var_12 = (unsigned short)374;
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
