#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2301204960910083553LL;
unsigned int var_4 = 17503813U;
unsigned char var_7 = (unsigned char)60;
int zero = 0;
unsigned short var_15 = (unsigned short)62383;
unsigned char var_16 = (unsigned char)193;
short var_17 = (short)6446;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
