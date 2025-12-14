#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned char var_1 = (unsigned char)242;
signed char var_3 = (signed char)5;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 8695684468370157672ULL;
unsigned char var_6 = (unsigned char)152;
short var_10 = (short)2681;
unsigned char var_11 = (unsigned char)117;
long long int var_12 = -4514260216217495271LL;
signed char var_13 = (signed char)88;
unsigned int var_16 = 3066212574U;
int zero = 0;
unsigned char var_18 = (unsigned char)76;
int var_19 = -484713333;
unsigned char var_20 = (unsigned char)254;
long long int var_21 = -7812801359613575635LL;
unsigned long long int var_22 = 2732812979683090027ULL;
short var_23 = (short)-25359;
int var_24 = 357656441;
unsigned int var_25 = 3698674365U;
int var_26 = -886582928;
signed char var_27 = (signed char)-67;
long long int var_28 = 6944106738538053586LL;
_Bool var_29 = (_Bool)0;
long long int var_30 = 2711513789671945858LL;
long long int arr_0 [20] ;
short arr_1 [20] [20] ;
unsigned char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
unsigned char arr_5 [20] [20] [20] ;
_Bool arr_7 [20] [20] ;
unsigned int arr_8 [20] [20] ;
signed char arr_10 [20] [20] [20] [20] ;
signed char arr_14 [20] ;
unsigned char arr_16 [20] ;
long long int arr_18 [20] [20] ;
unsigned long long int arr_21 [20] [20] [20] ;
unsigned char arr_25 [20] [20] [20] ;
_Bool arr_11 [20] [20] [20] ;
short arr_12 [20] ;
int arr_13 [20] [20] ;
short arr_20 [20] [20] ;
unsigned long long int arr_26 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -3744587716390232664LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19900;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4690105260796853041ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 10736023789043636180ULL : 1617805532221795940ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)245 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 1064692630U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = -5777763220666922614LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 12702177789908841977ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)17012 : (short)-765;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = -1896199347;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-5346 : (short)-1878;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2635528584792263872ULL : 6467968893061166998ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
