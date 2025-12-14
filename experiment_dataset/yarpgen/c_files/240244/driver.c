#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1400000973U;
signed char var_3 = (signed char)-66;
signed char var_8 = (signed char)107;
unsigned long long int var_10 = 4344934389332031618ULL;
signed char var_11 = (signed char)15;
unsigned long long int var_14 = 14601811635761087287ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-13438;
unsigned long long int var_22 = 8537956394401388741ULL;
short var_23 = (short)24810;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
