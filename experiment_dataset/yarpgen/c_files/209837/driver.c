#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 683133511;
unsigned long long int var_6 = 1919708235691211334ULL;
unsigned short var_8 = (unsigned short)7793;
short var_14 = (short)-28191;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2141165193U;
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
