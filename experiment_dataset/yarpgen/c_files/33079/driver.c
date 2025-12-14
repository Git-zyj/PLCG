#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5701036671399948125LL;
short var_2 = (short)-10364;
int var_6 = 1647082824;
unsigned long long int var_9 = 10061937608532751524ULL;
long long int var_13 = 7750374918558340805LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-23011;
long long int var_16 = 5709839498465818593LL;
int zero = 0;
long long int var_17 = 2567720001438861776LL;
int var_18 = -394664940;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)23;
unsigned int var_21 = 4189248773U;
signed char var_22 = (signed char)111;
long long int var_23 = -2426524400202580734LL;
unsigned char var_24 = (unsigned char)60;
long long int var_25 = 6341685248860604194LL;
unsigned char var_26 = (unsigned char)114;
unsigned long long int var_27 = 10728637391982344448ULL;
signed char var_28 = (signed char)72;
int var_29 = 613542094;
short var_30 = (short)12198;
signed char arr_0 [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_2 [19] [19] [19] ;
unsigned char arr_4 [19] ;
long long int arr_6 [19] [19] [19] ;
int arr_9 [19] [19] ;
int arr_10 [19] [19] [19] [19] ;
int arr_14 [19] [19] [19] [19] ;
signed char arr_16 [19] [19] [19] [19] [19] ;
long long int arr_17 [19] [19] ;
signed char arr_18 [19] [19] [19] [19] ;
short arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11363244040640204942ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1095866463681656315LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 865840736;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 154371669;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 910994665;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 5138888991490017581LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)-29942;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
