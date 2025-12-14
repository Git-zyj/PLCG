#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)204;
signed char var_8 = (signed char)23;
unsigned char var_9 = (unsigned char)176;
unsigned short var_11 = (unsigned short)36516;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
unsigned long long int var_18 = 12609013397144978101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
