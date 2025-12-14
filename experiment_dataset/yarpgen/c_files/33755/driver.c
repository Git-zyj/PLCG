#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)119;
long long int var_5 = 5278979021121898536LL;
unsigned char var_9 = (unsigned char)11;
int var_11 = 1463287675;
unsigned int var_15 = 608952838U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1816242674U;
unsigned int var_18 = 1278061000U;
unsigned char var_19 = (unsigned char)227;
signed char var_20 = (signed char)111;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 6036672512959986946ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1184407078726417015ULL;
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
