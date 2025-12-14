#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)218;
signed char var_2 = (signed char)49;
signed char var_3 = (signed char)-109;
signed char var_4 = (signed char)10;
signed char var_5 = (signed char)22;
long long int var_6 = 7095863858460359342LL;
unsigned short var_7 = (unsigned short)44236;
short var_8 = (short)31810;
int zero = 0;
signed char var_10 = (signed char)-1;
unsigned short var_11 = (unsigned short)31029;
unsigned short var_12 = (unsigned short)62188;
unsigned char var_13 = (unsigned char)207;
short var_14 = (short)12174;
unsigned int var_15 = 2307739772U;
short var_16 = (short)-8657;
unsigned short var_17 = (unsigned short)48642;
unsigned short var_18 = (unsigned short)51087;
unsigned char var_19 = (unsigned char)50;
signed char var_20 = (signed char)65;
int var_21 = 573667385;
unsigned char var_22 = (unsigned char)84;
signed char var_23 = (signed char)100;
unsigned short var_24 = (unsigned short)54478;
int var_25 = -289282724;
unsigned long long int var_26 = 2859993496016811998ULL;
short var_27 = (short)23142;
signed char var_28 = (signed char)-75;
short var_29 = (short)12784;
long long int arr_0 [15] [15] ;
unsigned short arr_2 [15] ;
signed char arr_7 [21] [21] ;
unsigned long long int arr_8 [21] [21] ;
unsigned short arr_11 [18] [18] ;
signed char arr_12 [18] ;
unsigned char arr_13 [18] ;
signed char arr_14 [18] [18] ;
signed char arr_16 [18] [18] ;
unsigned int arr_18 [18] [18] ;
unsigned long long int arr_20 [18] [18] [18] ;
int arr_22 [18] [18] [18] [18] [18] [18] ;
signed char arr_23 [18] [18] [18] [18] ;
unsigned char arr_26 [18] [18] ;
unsigned short arr_27 [18] ;
int arr_29 [18] [18] [18] ;
_Bool arr_32 [18] ;
unsigned short arr_6 [15] ;
unsigned short arr_9 [21] ;
unsigned int arr_15 [18] ;
unsigned short arr_24 [18] [18] ;
unsigned short arr_25 [18] ;
unsigned short arr_30 [18] [18] ;
unsigned short arr_33 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -7894204688858584519LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)63822;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 3742934246745200754ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)46876;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = 1607793456U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 11844736878395526401ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1193990855;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (unsigned short)42011;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 719378266;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48058 : (unsigned short)5837;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)19343;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 3599432267U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61936 : (unsigned short)42880;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59891 : (unsigned short)4482;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)32044;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = (unsigned short)46215;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
