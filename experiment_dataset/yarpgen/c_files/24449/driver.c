#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_10 = 2143597844;
unsigned short var_11 = (unsigned short)24064;
unsigned long long int var_15 = 7482204182975405168ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)59308;
unsigned char var_17 = (unsigned char)220;
void init() {
}

void checksum() {
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
