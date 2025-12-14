#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -999641780;
long long int var_5 = 7618028364008306216LL;
_Bool var_6 = (_Bool)0;
int var_7 = 1277454533;
unsigned int var_8 = 266669746U;
unsigned int var_15 = 2219519027U;
unsigned short var_16 = (unsigned short)43303;
long long int var_18 = 2325838830613695928LL;
int zero = 0;
unsigned int var_19 = 2864340914U;
int var_20 = -1452153404;
unsigned long long int var_21 = 5155574077016725042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
