#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-6664;
signed char var_4 = (signed char)-51;
short var_5 = (short)7400;
signed char var_7 = (signed char)-7;
unsigned int var_16 = 222640333U;
int zero = 0;
unsigned short var_20 = (unsigned short)4259;
int var_21 = 591402627;
short var_22 = (short)-14812;
short var_23 = (short)-27231;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
