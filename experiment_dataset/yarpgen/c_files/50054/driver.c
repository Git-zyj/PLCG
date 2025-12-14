#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 111137222;
long long int var_5 = 2388759607846416391LL;
signed char var_9 = (signed char)126;
unsigned short var_11 = (unsigned short)58731;
signed char var_12 = (signed char)-64;
unsigned int var_14 = 493783217U;
unsigned char var_15 = (unsigned char)138;
int zero = 0;
short var_17 = (short)22782;
unsigned long long int var_18 = 9419510271183010602ULL;
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
