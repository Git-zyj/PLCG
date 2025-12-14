#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
short var_2 = (short)-18430;
signed char var_4 = (signed char)-67;
unsigned long long int var_5 = 3381078585859851009ULL;
signed char var_7 = (signed char)45;
unsigned long long int var_9 = 15788341266447292802ULL;
signed char var_11 = (signed char)-108;
unsigned char var_12 = (unsigned char)207;
short var_14 = (short)-31108;
long long int var_15 = 3897910765532874131LL;
signed char var_17 = (signed char)-119;
short var_19 = (short)-10731;
int zero = 0;
int var_20 = 426441262;
unsigned short var_21 = (unsigned short)2035;
signed char var_22 = (signed char)55;
int var_23 = -1307145464;
signed char var_24 = (signed char)72;
signed char var_25 = (signed char)-98;
signed char var_26 = (signed char)-123;
unsigned char var_27 = (unsigned char)148;
short arr_0 [12] ;
signed char arr_1 [12] ;
unsigned long long int arr_3 [12] ;
unsigned short arr_4 [12] [12] [12] ;
int arr_5 [12] ;
int arr_6 [12] ;
long long int arr_7 [12] [12] ;
short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-13102 : (short)1690;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8461542103700499502ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)55658 : (unsigned short)47547;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 435732557;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1076184240 : -49165635;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 2670981886378527047LL : 8675582989129397580LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)32656;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
