#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15368;
long long int var_1 = 1676806311928061558LL;
long long int var_3 = -8821187092863575788LL;
short var_4 = (short)-4632;
short var_6 = (short)-30793;
unsigned char var_7 = (unsigned char)18;
long long int var_8 = 2828587778213116750LL;
int var_10 = -1057764476;
short var_12 = (short)-30756;
unsigned char var_13 = (unsigned char)56;
unsigned int var_14 = 2136529337U;
long long int var_15 = -5676980035564057255LL;
unsigned int var_16 = 3798577923U;
unsigned int var_17 = 106461084U;
short var_18 = (short)18533;
int zero = 0;
long long int var_19 = 2984906185894560789LL;
long long int var_20 = 2835161167461660009LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)4;
long long int var_23 = 2420120371879561710LL;
unsigned short var_24 = (unsigned short)17954;
long long int var_25 = 4527049681158258235LL;
unsigned int var_26 = 3903763762U;
unsigned int var_27 = 2077297814U;
int arr_3 [13] [13] [13] ;
short arr_4 [13] [13] [13] ;
short arr_5 [13] [13] ;
unsigned short arr_9 [13] [13] [13] [13] [13] ;
long long int arr_10 [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1843472104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)9323 : (short)11019;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-28584;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)518;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -8561380905046850354LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)151 : (unsigned char)189;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
