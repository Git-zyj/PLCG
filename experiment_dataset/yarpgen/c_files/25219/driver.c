#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1114066485U;
unsigned int var_11 = 2148607093U;
short var_12 = (short)-25058;
int zero = 0;
unsigned short var_20 = (unsigned short)55295;
long long int var_21 = -3793817778479810709LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
