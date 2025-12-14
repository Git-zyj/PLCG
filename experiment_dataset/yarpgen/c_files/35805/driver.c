#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1905987990;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-15111;
signed char var_4 = (signed char)-98;
_Bool var_5 = (_Bool)1;
int var_6 = 935150419;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4922323512480145250ULL;
unsigned int var_9 = 4009586689U;
signed char var_10 = (signed char)12;
long long int var_11 = -6328768261301658659LL;
unsigned short var_12 = (unsigned short)5014;
unsigned long long int var_13 = 13700073025908532499ULL;
int var_14 = -1111387439;
unsigned char var_15 = (unsigned char)4;
unsigned char var_16 = (unsigned char)169;
unsigned long long int var_17 = 12054015713667880490ULL;
short var_18 = (short)-8822;
int zero = 0;
unsigned long long int var_19 = 10165561346923039324ULL;
short var_20 = (short)-15918;
signed char var_21 = (signed char)-108;
signed char var_22 = (signed char)2;
signed char var_23 = (signed char)-38;
unsigned char var_24 = (unsigned char)168;
unsigned char var_25 = (unsigned char)1;
_Bool var_26 = (_Bool)0;
short var_27 = (short)22428;
unsigned long long int var_28 = 10467223854683014766ULL;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 704581802236656360ULL;
unsigned long long int var_31 = 14998124153754881987ULL;
short var_32 = (short)8653;
int var_33 = 1861301634;
unsigned int arr_0 [16] ;
unsigned short arr_2 [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned short arr_6 [16] [16] [16] ;
unsigned short arr_7 [16] [16] [16] ;
unsigned int arr_15 [15] [15] ;
unsigned short arr_18 [15] [15] ;
_Bool arr_30 [18] ;
_Bool arr_8 [16] [16] ;
unsigned long long int arr_9 [16] [16] ;
signed char arr_12 [12] ;
short arr_13 [12] [12] ;
long long int arr_14 [12] ;
unsigned int arr_21 [15] [15] [15] ;
unsigned long long int arr_26 [15] [15] [15] ;
unsigned short arr_27 [15] ;
_Bool arr_28 [15] ;
unsigned long long int arr_31 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3661371940U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)38346;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16976272280253571267ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)3671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)52787;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = 2635221385U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)9443;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 2596092993912609124ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (short)19576;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -6928607613563342498LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2970934009U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 361399013164592309ULL : 10627474523044977419ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31054 : (unsigned short)61445;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = 11557052035384361298ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
