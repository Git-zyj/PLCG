#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)250;
unsigned long long int var_3 = 5441924170123787199ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)70;
signed char var_6 = (signed char)114;
_Bool var_7 = (_Bool)0;
int var_8 = -2087674625;
unsigned char var_9 = (unsigned char)65;
int var_10 = 1086653649;
_Bool var_12 = (_Bool)0;
int var_13 = -410420294;
signed char var_14 = (signed char)-75;
unsigned char var_15 = (unsigned char)27;
int zero = 0;
signed char var_16 = (signed char)74;
int var_17 = 369864765;
_Bool var_18 = (_Bool)1;
int var_19 = -316980272;
unsigned int var_20 = 1509262673U;
int var_21 = -1848692290;
unsigned int var_22 = 2514661645U;
unsigned long long int var_23 = 13439451847942570825ULL;
signed char var_24 = (signed char)-90;
long long int var_25 = 6445780867045990238LL;
unsigned int var_26 = 3424123480U;
unsigned int var_27 = 2721847933U;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)98;
long long int var_30 = 2846647363995761308LL;
short var_31 = (short)22249;
unsigned int var_32 = 4214779784U;
int var_33 = -1756461852;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
short arr_2 [17] ;
short arr_3 [17] [17] [17] ;
signed char arr_5 [17] [17] ;
short arr_6 [13] ;
long long int arr_8 [13] ;
short arr_11 [13] ;
long long int arr_13 [13] ;
unsigned char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 950387832U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-28660 : (short)-8295;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)17403;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-13549;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -5585155308814436500LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)22815;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = -8446931135536084645LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)61;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
