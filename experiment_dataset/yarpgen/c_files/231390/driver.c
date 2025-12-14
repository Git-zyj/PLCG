#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8100813980755441408ULL;
int var_3 = -1338814135;
unsigned int var_5 = 2144509822U;
unsigned char var_8 = (unsigned char)19;
short var_12 = (short)24529;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
signed char var_16 = (signed char)-82;
_Bool var_17 = (_Bool)1;
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
