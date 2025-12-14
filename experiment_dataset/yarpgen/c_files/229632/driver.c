#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1936499153;
unsigned short var_1 = (unsigned short)51536;
long long int var_5 = 1681263938670878671LL;
int zero = 0;
unsigned int var_15 = 1811437517U;
unsigned short var_16 = (unsigned short)2776;
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
