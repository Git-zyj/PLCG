#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)157;
int var_13 = -54315925;
int zero = 0;
unsigned short var_14 = (unsigned short)60622;
long long int var_15 = 9032048592988654243LL;
short var_16 = (short)-7439;
unsigned int var_17 = 2344147153U;
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
