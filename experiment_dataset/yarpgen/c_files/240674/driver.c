#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)22;
signed char var_2 = (signed char)-88;
unsigned short var_4 = (unsigned short)46284;
unsigned int var_6 = 1828256179U;
unsigned char var_7 = (unsigned char)69;
long long int var_10 = -906613537765345122LL;
long long int var_11 = 7736962863736296333LL;
long long int var_12 = -4794467377208296939LL;
unsigned short var_13 = (unsigned short)60851;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_19 = 274235642342730311LL;
int zero = 0;
long long int var_20 = -9027223385832803894LL;
long long int var_21 = 1296733762448679219LL;
unsigned char var_22 = (unsigned char)49;
long long int var_23 = -9011854466555768037LL;
unsigned short var_24 = (unsigned short)7283;
int var_25 = 2033097001;
unsigned long long int var_26 = 13012826829893811637ULL;
_Bool var_27 = (_Bool)1;
long long int var_28 = -5775051570792736033LL;
unsigned char var_29 = (unsigned char)191;
unsigned short var_30 = (unsigned short)4592;
unsigned char var_31 = (unsigned char)6;
unsigned long long int var_32 = 10036986124214336547ULL;
unsigned long long int var_33 = 4093509855305749424ULL;
long long int var_34 = 3837288363325962338LL;
long long int var_35 = 5384039590667604857LL;
long long int var_36 = -8774447348753805324LL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
_Bool arr_2 [21] ;
unsigned long long int arr_3 [21] [21] ;
signed char arr_4 [21] ;
int arr_6 [17] ;
unsigned int arr_9 [17] ;
int arr_15 [17] ;
int arr_5 [21] ;
unsigned long long int arr_11 [17] [17] ;
long long int arr_12 [17] [17] ;
int arr_13 [17] [17] ;
unsigned short arr_17 [17] [17] [17] ;
int arr_20 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 9137435391372257759ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3751728820405172212ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 17028266653916615583ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1199390210;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 4263233420U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -1501865908;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -2065387572;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 13513608833934601759ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = -6863558561945977749LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = -561317385;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)37486;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 776100479;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
