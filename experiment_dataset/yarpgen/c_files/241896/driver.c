#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10319;
long long int var_2 = 422802161595134153LL;
long long int var_4 = 4646988867830016471LL;
short var_5 = (short)-24611;
unsigned long long int var_6 = 7896017051964912660ULL;
unsigned int var_8 = 2694875935U;
int var_9 = 1805781659;
unsigned char var_10 = (unsigned char)75;
long long int var_11 = -5509898299062415093LL;
long long int var_12 = -6776577539898663604LL;
int zero = 0;
short var_13 = (short)17855;
long long int var_14 = 7161960204533990866LL;
short var_15 = (short)-815;
long long int var_16 = 5856573281359425559LL;
unsigned char var_17 = (unsigned char)29;
unsigned int var_18 = 563997526U;
unsigned int var_19 = 2015458138U;
short var_20 = (short)3453;
unsigned int var_21 = 2466547590U;
long long int var_22 = 6183142239959896219LL;
int var_23 = 334912852;
short var_24 = (short)-1132;
short var_25 = (short)32430;
long long int var_26 = 839475050665588910LL;
short var_27 = (short)-32508;
unsigned char var_28 = (unsigned char)219;
unsigned int var_29 = 2870768255U;
short var_30 = (short)5070;
long long int var_31 = -8610694023068933457LL;
unsigned char var_32 = (unsigned char)8;
unsigned int var_33 = 2911197092U;
long long int var_34 = -7985391507079518074LL;
short var_35 = (short)2857;
unsigned int var_36 = 3363346398U;
short var_37 = (short)26036;
short var_38 = (short)24230;
short var_39 = (short)-1649;
short var_40 = (short)19136;
long long int var_41 = 8078110699494920177LL;
long long int var_42 = -1038298636560896485LL;
int var_43 = -734940683;
unsigned char var_44 = (unsigned char)101;
long long int arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned long long int arr_3 [23] ;
short arr_5 [23] [23] [23] ;
short arr_7 [23] [23] [23] ;
unsigned char arr_8 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_10 [23] [23] [23] [23] [23] [23] ;
long long int arr_11 [23] [23] [23] [23] ;
int arr_16 [23] [23] [23] ;
long long int arr_19 [23] [23] ;
unsigned char arr_23 [23] [23] ;
int arr_24 [23] ;
unsigned long long int arr_30 [23] [23] ;
unsigned int arr_34 [23] [23] [23] ;
short arr_36 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3776892818503782312LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4906396182340322507ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)30203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-25057 : (short)-18609;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)247 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2202778166U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2964897946003504971LL : 8626649667948776206LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1222195453 : 773307981;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = 5756606661058990383LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -464530102 : -531425477;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = 16059919931744828022ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1665502060U : 960152822U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (short)10862;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
