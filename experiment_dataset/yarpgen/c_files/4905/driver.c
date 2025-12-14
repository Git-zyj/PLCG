#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4056250634341531588LL;
unsigned long long int var_2 = 14027101200671019672ULL;
unsigned short var_6 = (unsigned short)6855;
short var_7 = (short)-10920;
int var_8 = 278542069;
short var_9 = (short)-16272;
unsigned short var_10 = (unsigned short)37931;
long long int var_12 = -8973613825024526501LL;
unsigned short var_14 = (unsigned short)64396;
int zero = 0;
long long int var_17 = 1970393111802665223LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)67;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6346098609167385016LL;
unsigned char arr_0 [24] ;
unsigned short arr_1 [24] ;
short arr_4 [24] ;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64188 : (unsigned short)58639;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)32219;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)29;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
