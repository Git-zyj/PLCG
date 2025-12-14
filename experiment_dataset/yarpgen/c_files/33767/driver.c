#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43906;
unsigned short var_2 = (unsigned short)19935;
unsigned long long int var_3 = 15085214270456539989ULL;
short var_5 = (short)12367;
unsigned int var_7 = 29796734U;
unsigned int var_8 = 2364090300U;
long long int var_9 = -7265687069778942992LL;
long long int var_12 = -5554061351738112378LL;
unsigned short var_13 = (unsigned short)22100;
long long int var_15 = -7202067070248127810LL;
int zero = 0;
long long int var_16 = 298487268697300385LL;
unsigned long long int var_17 = 12872648832935751483ULL;
unsigned long long int var_18 = 8719574409956511928ULL;
long long int var_19 = 6205604548584620797LL;
_Bool var_20 = (_Bool)0;
unsigned short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)4253;
}

void checksum() {
    hash(&seed, var_16);
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
