#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7393208646867759849ULL;
unsigned char var_3 = (unsigned char)85;
unsigned short var_4 = (unsigned short)50;
unsigned int var_5 = 3323137155U;
short var_7 = (short)25758;
long long int var_8 = 4929543255584027392LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 2954435824465659694ULL;
int zero = 0;
signed char var_13 = (signed char)61;
short var_14 = (short)-15106;
unsigned short var_15 = (unsigned short)31743;
unsigned int var_16 = 67016627U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
