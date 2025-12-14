#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44785;
unsigned int var_1 = 2173478090U;
unsigned int var_2 = 2467239014U;
unsigned short var_3 = (unsigned short)2304;
long long int var_4 = -5766387920519690218LL;
long long int var_5 = 2322827928121337030LL;
unsigned int var_6 = 2968232879U;
unsigned char var_7 = (unsigned char)65;
unsigned short var_8 = (unsigned short)60561;
unsigned char var_9 = (unsigned char)50;
unsigned char var_10 = (unsigned char)138;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)20;
long long int var_13 = -508316448744918863LL;
unsigned short var_14 = (unsigned short)39327;
unsigned char var_15 = (unsigned char)218;
unsigned char var_16 = (unsigned char)93;
unsigned int var_17 = 1122784985U;
long long int var_18 = 6464837949099651136LL;
unsigned short var_19 = (unsigned short)13306;
long long int var_20 = -8414210790800607889LL;
unsigned int var_21 = 3496151809U;
unsigned char var_22 = (unsigned char)87;
unsigned char var_23 = (unsigned char)3;
unsigned short var_24 = (unsigned short)32686;
unsigned short var_25 = (unsigned short)63805;
unsigned char var_26 = (unsigned char)84;
unsigned short var_27 = (unsigned short)51064;
unsigned short var_28 = (unsigned short)8283;
unsigned short var_29 = (unsigned short)33743;
unsigned int var_30 = 2262258309U;
unsigned char var_31 = (unsigned char)5;
unsigned int var_32 = 2229183802U;
unsigned short var_33 = (unsigned short)58138;
long long int var_34 = 4008573773371132875LL;
unsigned short var_35 = (unsigned short)2562;
unsigned short var_36 = (unsigned short)23848;
long long int var_37 = -4103645144708225480LL;
unsigned short var_38 = (unsigned short)57087;
unsigned int var_39 = 2982920639U;
unsigned int var_40 = 861141178U;
unsigned int var_41 = 3003104887U;
unsigned char var_42 = (unsigned char)160;
unsigned int var_43 = 3938163611U;
unsigned short var_44 = (unsigned short)62228;
long long int var_45 = 8902515613690352812LL;
unsigned short arr_2 [14] ;
unsigned short arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
long long int arr_5 [14] [14] [14] ;
long long int arr_6 [14] [14] [14] [14] ;
unsigned int arr_7 [14] [14] [14] [14] ;
long long int arr_8 [14] [14] [14] [14] ;
unsigned int arr_9 [14] ;
long long int arr_10 [14] [14] ;
long long int arr_12 [14] [14] [14] [14] ;
unsigned short arr_13 [14] [14] [14] [14] [14] ;
unsigned short arr_15 [14] [14] [14] ;
unsigned char arr_16 [14] ;
unsigned int arr_19 [14] [14] ;
unsigned short arr_20 [14] [14] [14] ;
unsigned short arr_29 [14] [14] ;
unsigned int arr_30 [25] ;
unsigned char arr_32 [25] [25] ;
long long int arr_36 [13] ;
unsigned int arr_39 [13] [13] [13] ;
unsigned short arr_48 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)35784;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)13607;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)64251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6339765959056154253LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2719972729989557641LL : -3967309817584753177LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 259885504U : 1743515085U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1833927141548140417LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 416684671U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 8716543169391783557LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1734408184010883097LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)8852;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)56037;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 1559631328U : 3607555174U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)10140;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)63650;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = 2162775762U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 2890757204249354004LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 3754518357U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54192 : (unsigned short)43110;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_45);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
