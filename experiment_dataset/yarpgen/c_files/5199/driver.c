#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7175;
unsigned long long int var_1 = 16436573069281771749ULL;
signed char var_2 = (signed char)85;
unsigned char var_3 = (unsigned char)98;
unsigned int var_4 = 1913607526U;
unsigned int var_5 = 2949030380U;
unsigned short var_6 = (unsigned short)38080;
int var_9 = -351571063;
signed char var_10 = (signed char)-50;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)72;
long long int var_14 = 8811868599768709822LL;
int var_15 = -205489918;
unsigned int var_16 = 2295384003U;
unsigned int var_17 = 8160338U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
