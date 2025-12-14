#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2112186849U;
signed char var_1 = (signed char)-2;
short var_2 = (short)-30127;
unsigned int var_3 = 3064861112U;
unsigned int var_4 = 2239545474U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11050245729943805856ULL;
unsigned int var_7 = 811841159U;
long long int var_8 = -2938721601527475168LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16377237504359597568ULL;
short var_12 = (short)-24991;
short var_13 = (short)-14998;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
long long int var_15 = 2680247641198409134LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)9133;
signed char var_18 = (signed char)40;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)32217;
long long int var_21 = 3016433162031004307LL;
long long int var_22 = -1240885510733333024LL;
long long int var_23 = 7991360378476770454LL;
signed char var_24 = (signed char)-110;
unsigned char var_25 = (unsigned char)78;
unsigned long long int var_26 = 663109667953867861ULL;
_Bool var_27 = (_Bool)0;
short var_28 = (short)30948;
unsigned short var_29 = (unsigned short)29228;
short var_30 = (short)-10087;
unsigned int var_31 = 1235829212U;
short var_32 = (short)20061;
unsigned int var_33 = 3133563796U;
unsigned long long int var_34 = 11821965873899012147ULL;
unsigned long long int var_35 = 2765211679040714537ULL;
unsigned int var_36 = 4219972349U;
unsigned long long int var_37 = 5792444863416637125ULL;
unsigned int var_38 = 963798205U;
unsigned char var_39 = (unsigned char)229;
short var_40 = (short)7429;
unsigned int var_41 = 1725048337U;
int var_42 = 1559801540;
unsigned long long int arr_1 [19] [19] ;
short arr_2 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
unsigned char arr_7 [19] [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
_Bool arr_10 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_11 [19] [19] [19] [19] [19] [19] ;
signed char arr_14 [19] [19] ;
signed char arr_16 [19] [19] [19] [19] ;
short arr_20 [20] ;
unsigned int arr_22 [20] [20] ;
unsigned char arr_23 [20] [20] ;
unsigned short arr_24 [20] [20] [20] ;
unsigned int arr_25 [20] [20] [20] [20] ;
short arr_26 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 5011477633537834677ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23631;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 771299997599011791ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 4743266182006702291ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (short)-3292;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = 3039908421U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)7410;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 1368307420U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (short)-31937;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
