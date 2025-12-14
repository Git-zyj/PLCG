#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1789451464U;
signed char var_4 = (signed char)122;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)153;
int zero = 0;
unsigned short var_10 = (unsigned short)64655;
unsigned int var_11 = 345373939U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
