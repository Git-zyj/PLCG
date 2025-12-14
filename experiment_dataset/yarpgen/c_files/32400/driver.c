#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5946723525671671780LL;
unsigned int var_4 = 2246551081U;
unsigned short var_5 = (unsigned short)23270;
signed char var_11 = (signed char)51;
int zero = 0;
unsigned char var_14 = (unsigned char)68;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
