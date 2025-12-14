#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4565060192235642255LL;
unsigned char var_4 = (unsigned char)53;
unsigned int var_11 = 3449136068U;
int zero = 0;
int var_15 = -1570531892;
unsigned short var_16 = (unsigned short)60408;
unsigned char var_17 = (unsigned char)114;
unsigned int var_18 = 450699015U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
