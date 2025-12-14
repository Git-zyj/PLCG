#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52777;
short var_1 = (short)14735;
unsigned int var_2 = 1450405487U;
unsigned int var_3 = 3683404720U;
int var_4 = 858478928;
short var_5 = (short)31105;
unsigned int var_6 = 2410879708U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)185;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 9952302267349681911ULL;
long long int var_11 = -2580434713514303607LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)69;
short var_14 = (short)12923;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -654450276;
unsigned char var_17 = (unsigned char)253;
unsigned char var_18 = (unsigned char)88;
unsigned int var_19 = 172596565U;
int var_20 = -63180701;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
