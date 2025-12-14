#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-1;
signed char var_3 = (signed char)-41;
long long int var_5 = -157725287186596572LL;
int var_6 = 1972486400;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)210;
int var_11 = -1500661956;
unsigned long long int var_12 = 16691450036162408006ULL;
int zero = 0;
int var_15 = -1099535409;
long long int var_16 = -5567206067484270071LL;
signed char var_17 = (signed char)-54;
short var_18 = (short)-29909;
int var_19 = -871359747;
unsigned long long int var_20 = 2683397383890142906ULL;
long long int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
signed char arr_2 [13] ;
unsigned long long int arr_3 [13] [13] ;
signed char arr_4 [13] [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3368919504726327781LL : -943283939596236863LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)62181;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 13618124882567382659ULL : 17646314089053114109ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)47374;
}

void checksum() {
    hash(&seed, var_15);
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
