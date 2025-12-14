#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3786453261606430283LL;
int var_1 = 1842337440;
unsigned char var_2 = (unsigned char)152;
signed char var_3 = (signed char)91;
long long int var_4 = -7457657904034098771LL;
signed char var_5 = (signed char)12;
long long int var_6 = -3692516563331899879LL;
unsigned int var_7 = 3820347467U;
short var_10 = (short)23340;
unsigned short var_11 = (unsigned short)36261;
unsigned long long int var_13 = 7351306575291433639ULL;
int var_14 = 325797554;
long long int var_15 = -2616100811198037931LL;
unsigned long long int var_16 = 15099110430738195149ULL;
long long int var_17 = -8261139515472056738LL;
long long int var_18 = -7065751140582431809LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5072793248686083440ULL;
unsigned char var_21 = (unsigned char)118;
unsigned int var_22 = 4091461085U;
unsigned short var_23 = (unsigned short)62880;
unsigned int var_24 = 1302800596U;
signed char var_25 = (signed char)-46;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 12322062704017482370ULL;
unsigned char var_28 = (unsigned char)180;
unsigned char var_29 = (unsigned char)181;
unsigned short arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
long long int arr_3 [16] ;
unsigned long long int arr_5 [16] ;
unsigned char arr_6 [16] ;
short arr_8 [21] ;
unsigned long long int arr_9 [21] ;
long long int arr_10 [21] [21] [21] ;
long long int arr_11 [21] [21] [21] ;
unsigned short arr_12 [21] [21] ;
_Bool arr_13 [21] [21] [21] ;
long long int arr_16 [23] ;
int arr_17 [23] [23] ;
int arr_4 [16] ;
_Bool arr_7 [16] [16] ;
unsigned short arr_14 [21] [21] [21] ;
_Bool arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14869;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-27833;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3357508317U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -6221464490024589893LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 4906121585775117817ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)28295;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 16771952688484363213ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2047126178304952013LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 6451526309737691113LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)24985;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 8045948822894592189LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = -1734632891;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -967908662;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)44206;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
