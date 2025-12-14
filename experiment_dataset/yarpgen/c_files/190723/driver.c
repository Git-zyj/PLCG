#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
signed char var_8 = (signed char)104;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)17386;
unsigned int var_11 = 3811450454U;
int zero = 0;
unsigned short var_15 = (unsigned short)36081;
unsigned char var_16 = (unsigned char)95;
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
