#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1532613736U;
unsigned int var_1 = 2237143041U;
long long int var_3 = -8454897796824554205LL;
short var_4 = (short)-21838;
long long int var_6 = 7230365124921802759LL;
short var_7 = (short)12755;
int var_9 = 2114542020;
unsigned short var_11 = (unsigned short)7434;
unsigned short var_12 = (unsigned short)29202;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)32740;
short var_17 = (short)27145;
short var_18 = (short)-6186;
short var_19 = (short)6657;
unsigned int var_20 = 2091392965U;
short var_21 = (short)9572;
unsigned int var_22 = 2950852958U;
unsigned int var_23 = 654966339U;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 6749812092990363437ULL;
long long int var_26 = 4238266708201893061LL;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-4492;
_Bool var_29 = (_Bool)1;
long long int var_30 = 3443619963803517634LL;
unsigned int var_31 = 2121846343U;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 11951512692273527355ULL;
long long int var_34 = 9196898231469220251LL;
long long int var_35 = -1591318517300756741LL;
unsigned short var_36 = (unsigned short)17877;
unsigned int var_37 = 4215573607U;
unsigned int var_38 = 1859360144U;
short var_39 = (short)-22946;
int var_40 = 759658534;
unsigned short arr_0 [20] [20] ;
short arr_1 [20] ;
int arr_3 [20] [20] [20] ;
unsigned int arr_6 [20] ;
long long int arr_7 [25] ;
int arr_8 [25] ;
short arr_10 [25] ;
unsigned int arr_11 [25] ;
int arr_14 [25] [25] [25] ;
int arr_15 [25] [25] ;
short arr_17 [25] [25] [25] [25] ;
unsigned char arr_26 [20] [20] [20] ;
long long int arr_28 [20] [20] [20] ;
short arr_36 [20] [20] [20] [20] [20] [20] ;
long long int arr_39 [20] [20] [20] [20] [20] ;
int arr_42 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)17250;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)27853;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1415442818;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 889129896U : 577718922U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 663524927601566006LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 334348762;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)1604 : (short)-27086;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1806083662U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 366742828 : -1716169921;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -2001795757 : -344427264;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)19966 : (short)745;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -911844416587685578LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-26480;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = -3211080671532073821LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = -1098227963;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
