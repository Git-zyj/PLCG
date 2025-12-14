#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)96;
unsigned int var_5 = 2361751710U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)59932;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8178993701927704532ULL;
unsigned short var_13 = (unsigned short)25234;
signed char var_14 = (signed char)-118;
int zero = 0;
signed char var_16 = (signed char)-10;
unsigned short var_17 = (unsigned short)5236;
short var_18 = (short)4308;
int var_19 = -2090415380;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
