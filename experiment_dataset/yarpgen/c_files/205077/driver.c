#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 7272370496447050750ULL;
unsigned short var_4 = (unsigned short)47255;
signed char var_5 = (signed char)9;
unsigned int var_6 = 1662048731U;
signed char var_7 = (signed char)87;
_Bool var_8 = (_Bool)1;
long long int var_10 = 4317641590288766258LL;
long long int var_12 = 6277573995587961915LL;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-51;
short var_18 = (short)21877;
int zero = 0;
unsigned long long int var_20 = 11500327064887194251ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)26642;
unsigned char var_23 = (unsigned char)99;
signed char var_24 = (signed char)23;
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
