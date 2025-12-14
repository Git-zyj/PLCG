#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1102057340;
_Bool var_1 = (_Bool)0;
int var_2 = -941080900;
long long int var_3 = -4364356797421410016LL;
unsigned long long int var_4 = 2827679863048389657ULL;
unsigned short var_5 = (unsigned short)50349;
long long int var_6 = -2163985008154130193LL;
short var_7 = (short)-30519;
unsigned short var_9 = (unsigned short)54328;
int var_10 = -466449585;
_Bool var_11 = (_Bool)1;
int var_12 = 1411861475;
int var_13 = -356840227;
int zero = 0;
short var_14 = (short)-22066;
unsigned long long int var_15 = 5401966560605243548ULL;
unsigned char var_16 = (unsigned char)109;
unsigned char var_17 = (unsigned char)158;
long long int var_18 = -2459352125272515928LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)27946;
_Bool var_21 = (_Bool)1;
unsigned char arr_0 [20] ;
long long int arr_1 [20] ;
long long int arr_2 [20] ;
int arr_3 [20] [20] [20] ;
unsigned short arr_4 [20] [20] ;
int arr_9 [14] [14] ;
int arr_10 [14] ;
int arr_5 [20] [20] ;
unsigned char arr_6 [20] ;
int arr_7 [20] [20] ;
unsigned short arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5575628167686840979LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -8521340808771268120LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1382202805;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)12657;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 2141789109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = -954441385;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 833308234;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 1816481225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13343 : (unsigned short)43330;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
