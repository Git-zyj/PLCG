#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)23859;
unsigned char var_4 = (unsigned char)170;
short var_5 = (short)26368;
_Bool var_6 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-124;
unsigned long long int var_15 = 10759170949667121088ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1176921573U;
unsigned int var_21 = 591203629U;
unsigned int var_22 = 2915135968U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
