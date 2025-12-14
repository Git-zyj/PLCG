#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1279671395U;
unsigned long long int var_3 = 9401093541023435146ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)61523;
signed char var_8 = (signed char)110;
int zero = 0;
unsigned short var_10 = (unsigned short)45744;
int var_11 = -576942609;
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
