#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1037282412U;
short var_1 = (short)-3204;
unsigned int var_2 = 1297990098U;
signed char var_4 = (signed char)-74;
unsigned long long int var_7 = 5489702422262144398ULL;
unsigned long long int var_9 = 15336348311341622330ULL;
unsigned int var_11 = 1568364995U;
short var_12 = (short)4505;
long long int var_14 = 2035908347223853931LL;
signed char var_18 = (signed char)2;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-112;
unsigned long long int var_22 = 14961115982118090101ULL;
short var_23 = (short)-31869;
_Bool var_24 = (_Bool)1;
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
