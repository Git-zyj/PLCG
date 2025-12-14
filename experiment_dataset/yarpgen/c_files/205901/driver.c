#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21202;
short var_2 = (short)4356;
short var_5 = (short)-13773;
unsigned short var_6 = (unsigned short)65390;
short var_8 = (short)8868;
signed char var_9 = (signed char)-64;
int var_10 = 1986620126;
int var_15 = 2069110686;
unsigned long long int var_18 = 15924581174124741285ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)191;
short var_21 = (short)406;
unsigned long long int var_22 = 12208821032854729574ULL;
long long int var_23 = 4302086135153498524LL;
short var_24 = (short)-24704;
short var_25 = (short)2375;
int var_26 = -1725068015;
signed char var_27 = (signed char)36;
short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
signed char arr_3 [15] ;
int arr_10 [15] ;
short arr_12 [15] [15] [15] [15] ;
long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-26180;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 15025624673265134552ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1314887377;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-31881 : (short)29932;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = -4579882486209142293LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
