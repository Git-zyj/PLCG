#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned short var_1 = (unsigned short)10820;
long long int var_2 = 5960684862592723090LL;
short var_3 = (short)-20924;
int var_4 = -1799954516;
unsigned char var_5 = (unsigned char)4;
unsigned short var_6 = (unsigned short)20553;
unsigned long long int var_7 = 13575427182077050340ULL;
unsigned short var_8 = (unsigned short)37610;
unsigned long long int var_9 = 2691047919238173288ULL;
int zero = 0;
unsigned long long int var_10 = 17870829913184878896ULL;
short var_11 = (short)-24451;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2062275230002308050LL;
unsigned short var_14 = (unsigned short)37180;
unsigned long long int var_15 = 12739344940773246766ULL;
unsigned short var_16 = (unsigned short)43617;
unsigned long long int var_17 = 1342683135651185019ULL;
long long int var_18 = -2663212386761591218LL;
long long int var_19 = 1550985075218166621LL;
unsigned long long int var_20 = 12553996394273271481ULL;
unsigned long long int var_21 = 6105565292743408983ULL;
short var_22 = (short)12997;
unsigned short var_23 = (unsigned short)13255;
long long int var_24 = -680400668534667803LL;
unsigned char var_25 = (unsigned char)235;
short var_26 = (short)-28154;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 1190975020447447696ULL;
unsigned short var_29 = (unsigned short)17653;
short var_30 = (short)-7413;
unsigned char var_31 = (unsigned char)143;
unsigned long long int var_32 = 10089775498912408969ULL;
unsigned char var_33 = (unsigned char)92;
long long int var_34 = -3330446593577310941LL;
long long int var_35 = 6421445140511614774LL;
int var_36 = -363321281;
signed char var_37 = (signed char)27;
short arr_1 [16] [16] ;
short arr_2 [16] ;
_Bool arr_3 [16] [16] ;
signed char arr_4 [16] [16] ;
long long int arr_5 [16] [16] [16] [16] ;
int arr_7 [16] [16] [16] [16] ;
long long int arr_8 [16] [16] [16] [16] ;
short arr_9 [16] [16] [16] [16] [16] ;
long long int arr_10 [16] [16] [16] [16] [16] [16] ;
short arr_11 [16] [16] [16] [16] [16] ;
long long int arr_12 [16] [16] ;
unsigned char arr_13 [16] [16] [16] [16] [16] ;
int arr_17 [13] ;
signed char arr_18 [13] ;
unsigned short arr_22 [13] [13] [13] ;
unsigned short arr_26 [25] ;
int arr_27 [25] ;
long long int arr_29 [25] ;
unsigned long long int arr_30 [25] [25] ;
long long int arr_31 [25] [25] ;
long long int arr_32 [25] [25] [25] ;
short arr_33 [25] ;
long long int arr_34 [25] [25] [25] [25] ;
int arr_35 [25] ;
short arr_36 [25] ;
long long int arr_37 [25] [25] [25] [25] ;
unsigned char arr_38 [25] [25] ;
signed char arr_51 [25] ;
long long int arr_53 [25] ;
unsigned int arr_54 [25] [25] [25] ;
long long int arr_58 [25] [25] [25] [25] ;
_Bool arr_14 [16] ;
signed char arr_20 [13] ;
signed char arr_24 [13] [13] ;
unsigned int arr_25 [13] ;
unsigned short arr_28 [25] ;
int arr_42 [25] [25] [25] ;
short arr_43 [25] [25] ;
unsigned long long int arr_46 [25] [25] ;
unsigned short arr_47 [25] [25] ;
unsigned int arr_59 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-8440;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-26703;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)62 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -2622150197379573636LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2052373333 : 251839079;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2562413536847906131LL : -8957568337926688496LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-26283;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 7194400182962367022LL : 2242236127579884028LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)23998;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -779943103617501148LL : -4985581247484742560LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = -1434578481;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)4107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (unsigned short)43517;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = -797591661;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = -5795802489324525489LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = 211814249676556533ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = -4980461201780785249LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 2967341135933923771LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (short)22273;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 1489222688928704686LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 1505290531;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (short)-8738;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -5811864981570483327LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_53 [i_0] = 4541376456480822875LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 4070531986U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = -2024566297466547859LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = 3549313072U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (unsigned short)31109;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = -1236520411;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = (short)20398;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_46 [i_0] [i_1] = 95515208691140440ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned short)690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_59 [i_0] = 2888203517U;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
