#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9475;
unsigned short var_11 = (unsigned short)64098;
unsigned short var_12 = (unsigned short)10768;
int zero = 0;
unsigned long long int var_15 = 13642969317486881599ULL;
unsigned char var_16 = (unsigned char)126;
void init() {
}

void checksum() {
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
