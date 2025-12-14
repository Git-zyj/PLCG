#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
int var_7 = -286329037;
signed char var_9 = (signed char)-105;
unsigned long long int var_11 = 12904793510794771130ULL;
int zero = 0;
unsigned int var_14 = 3156840802U;
signed char var_15 = (signed char)66;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-34;
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
