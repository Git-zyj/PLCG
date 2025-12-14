#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_1 = (unsigned char)135;
unsigned int var_2 = 1323831949U;
unsigned char var_3 = (unsigned char)127;
short var_6 = (short)30220;
long long int var_8 = 6559965365464548868LL;
unsigned int var_10 = 1278999731U;
int zero = 0;
signed char var_12 = (signed char)49;
int var_13 = -1897486405;
unsigned int var_14 = 2117815586U;
short var_15 = (short)3679;
unsigned long long int var_16 = 1238160112724831524ULL;
unsigned int var_17 = 2877034707U;
short var_18 = (short)17894;
short var_19 = (short)11542;
int var_20 = -1192433275;
unsigned char var_21 = (unsigned char)16;
unsigned int var_22 = 496202379U;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)87;
unsigned long long int var_27 = 3391319149994742216ULL;
unsigned short var_28 = (unsigned short)3568;
int var_29 = 133580141;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2689346916U;
long long int var_32 = 1227810545678168235LL;
int var_33 = -1884804281;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 3042753904421721752ULL;
unsigned int arr_0 [23] ;
long long int arr_2 [23] [23] ;
long long int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
unsigned short arr_5 [17] [17] ;
unsigned short arr_7 [17] ;
long long int arr_11 [17] [17] [17] [17] ;
unsigned long long int arr_15 [17] [17] [17] [17] ;
unsigned int arr_17 [17] [17] [17] [17] ;
short arr_18 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_25 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4146574752U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -8622426586637549489LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -2297274292171565465LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1322963700U : 860528947U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)62551;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)17737;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4306826843493019245LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3363505533567595041ULL : 16562789123551755173ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 400617381U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-3097;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 1178175975377809040ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
