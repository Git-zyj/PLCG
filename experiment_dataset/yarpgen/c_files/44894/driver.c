#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)246;
unsigned long long int var_6 = 4648936959498823250ULL;
unsigned long long int var_7 = 9766260152912019147ULL;
signed char var_9 = (signed char)4;
int zero = 0;
short var_11 = (short)-31020;
unsigned char var_12 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
