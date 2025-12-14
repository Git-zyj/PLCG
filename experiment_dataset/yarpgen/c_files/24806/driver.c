#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)-14164;
unsigned long long int var_6 = 14077433439846925869ULL;
long long int var_9 = 1048582995736485705LL;
int zero = 0;
unsigned char var_14 = (unsigned char)43;
unsigned char var_15 = (unsigned char)136;
unsigned short var_16 = (unsigned short)3240;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
