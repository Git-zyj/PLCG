#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3949333090U;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)52;
signed char var_10 = (signed char)85;
short var_15 = (short)-16760;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
unsigned int var_19 = 3347011780U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
