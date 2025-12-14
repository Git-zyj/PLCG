#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5004964043111470017ULL;
short var_1 = (short)2869;
signed char var_2 = (signed char)-126;
unsigned int var_3 = 1399499632U;
_Bool var_4 = (_Bool)0;
unsigned char var_10 = (unsigned char)128;
unsigned int var_12 = 2653612892U;
int zero = 0;
unsigned short var_13 = (unsigned short)15612;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)45782;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
