#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1977215241U;
short var_3 = (short)-11110;
unsigned short var_5 = (unsigned short)29783;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)105;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 5514591224080300510ULL;
short var_14 = (short)27501;
unsigned short var_15 = (unsigned short)13452;
unsigned long long int var_16 = 6297093674031398923ULL;
int zero = 0;
short var_17 = (short)-9694;
unsigned short var_18 = (unsigned short)32856;
signed char var_19 = (signed char)6;
unsigned long long int var_20 = 8980984345937290942ULL;
unsigned char var_21 = (unsigned char)171;
unsigned char var_22 = (unsigned char)192;
long long int var_23 = -8097099239194198186LL;
unsigned char arr_0 [14] ;
unsigned short arr_1 [14] ;
short arr_2 [14] ;
_Bool arr_3 [14] ;
int arr_5 [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50142 : (unsigned short)55941;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)14556 : (short)27877;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 522543022;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6604700048780961265ULL : 10660817865898287087ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
