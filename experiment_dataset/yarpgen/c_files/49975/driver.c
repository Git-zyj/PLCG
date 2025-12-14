#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -486427824991412776LL;
long long int var_1 = -7365818864850310563LL;
unsigned char var_4 = (unsigned char)144;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)104;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1117161302467761480LL;
unsigned short var_11 = (unsigned short)40423;
int var_12 = -180529444;
unsigned short var_15 = (unsigned short)29327;
int zero = 0;
short var_17 = (short)-13215;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)32413;
unsigned int var_20 = 4009712380U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
