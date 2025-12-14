#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)114;
unsigned char var_7 = (unsigned char)146;
signed char var_8 = (signed char)-23;
unsigned long long int var_13 = 17777091859931440496ULL;
int zero = 0;
unsigned int var_14 = 275169782U;
short var_15 = (short)27869;
long long int var_16 = 7354913186586210562LL;
unsigned int var_17 = 2156874536U;
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
