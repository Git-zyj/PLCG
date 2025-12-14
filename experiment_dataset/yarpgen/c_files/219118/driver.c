#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned char var_4 = (unsigned char)86;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 13652236588085364760ULL;
unsigned char var_15 = (unsigned char)7;
unsigned int var_16 = 2061430935U;
unsigned int var_17 = 664050488U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
