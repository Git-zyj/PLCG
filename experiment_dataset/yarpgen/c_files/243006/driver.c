#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-17877;
unsigned long long int var_5 = 3535073264416518259ULL;
unsigned char var_11 = (unsigned char)110;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1052352670;
long long int var_17 = -6312453457224233449LL;
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
