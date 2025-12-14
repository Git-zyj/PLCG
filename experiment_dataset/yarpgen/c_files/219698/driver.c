#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)63101;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-53;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2001829309U;
int zero = 0;
signed char var_14 = (signed char)25;
unsigned int var_15 = 407403542U;
unsigned char var_16 = (unsigned char)23;
unsigned char var_17 = (unsigned char)68;
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
