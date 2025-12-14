#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1900792789U;
signed char var_2 = (signed char)35;
short var_4 = (short)-23091;
unsigned char var_5 = (unsigned char)132;
int var_6 = 736245589;
unsigned char var_8 = (unsigned char)88;
unsigned long long int var_11 = 1725941870917140008ULL;
short var_12 = (short)-30096;
int var_13 = -1896997254;
long long int var_15 = 4041400220918539346LL;
int var_16 = -1492215905;
unsigned int var_17 = 674237958U;
int zero = 0;
unsigned int var_18 = 2652097674U;
unsigned int var_19 = 3212939079U;
unsigned int var_20 = 276662921U;
long long int var_21 = 2270929619439042697LL;
unsigned int var_22 = 2171407835U;
long long int var_23 = 2597647372354366146LL;
short var_24 = (short)-5577;
_Bool arr_0 [17] ;
short arr_1 [17] ;
int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-24134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 611706006;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
