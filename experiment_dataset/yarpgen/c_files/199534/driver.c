#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
int var_9 = -1410237983;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)71;
int var_15 = 1885227132;
int var_16 = -511800145;
int zero = 0;
unsigned char var_17 = (unsigned char)73;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8122341322945542636LL;
unsigned short var_20 = (unsigned short)35472;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
