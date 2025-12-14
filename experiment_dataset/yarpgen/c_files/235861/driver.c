#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
int var_3 = 421724110;
unsigned char var_6 = (unsigned char)163;
unsigned char var_8 = (unsigned char)210;
long long int var_11 = 3279651870947060892LL;
long long int var_12 = 6743885197145483819LL;
int var_13 = 1746760152;
unsigned short var_14 = (unsigned short)56740;
int zero = 0;
int var_17 = -1047055810;
signed char var_18 = (signed char)-49;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)72;
unsigned short var_21 = (unsigned short)48978;
long long int var_22 = 1100356112154392792LL;
signed char var_23 = (signed char)-80;
unsigned short arr_11 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)40119;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
