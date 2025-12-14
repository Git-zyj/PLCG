#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -169630280;
unsigned short var_2 = (unsigned short)4568;
unsigned char var_11 = (unsigned char)86;
int var_13 = -157316843;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)13;
_Bool var_17 = (_Bool)0;
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
