#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 675272602U;
unsigned short var_1 = (unsigned short)25979;
unsigned long long int var_6 = 14006926670916471453ULL;
signed char var_11 = (signed char)71;
int zero = 0;
unsigned long long int var_13 = 12602087339122396783ULL;
unsigned char var_14 = (unsigned char)223;
_Bool var_15 = (_Bool)1;
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
