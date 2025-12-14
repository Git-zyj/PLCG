#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2410821825U;
signed char var_2 = (signed char)-121;
unsigned long long int var_3 = 8400882685263756610ULL;
short var_4 = (short)-12731;
_Bool var_5 = (_Bool)0;
int var_8 = -1703401359;
unsigned int var_10 = 232281784U;
unsigned int var_11 = 490150943U;
unsigned int var_13 = 2954538441U;
short var_14 = (short)-27980;
long long int var_15 = -7636679125156980177LL;
unsigned int var_16 = 1065408975U;
int var_17 = -1112115698;
short var_18 = (short)5829;
long long int var_19 = -7277278872468869106LL;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
unsigned int var_21 = 3434640427U;
unsigned int var_22 = 33720703U;
signed char var_23 = (signed char)82;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)106;
long long int var_26 = -936828005659472891LL;
unsigned short var_27 = (unsigned short)10973;
unsigned int var_28 = 2320216466U;
_Bool var_29 = (_Bool)1;
signed char arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned short arr_3 [25] ;
short arr_4 [25] ;
unsigned int arr_5 [25] ;
signed char arr_9 [10] [10] ;
unsigned long long int arr_13 [10] ;
unsigned char arr_14 [10] [10] ;
unsigned int arr_2 [12] ;
short arr_6 [25] ;
unsigned int arr_10 [10] ;
signed char arr_11 [10] ;
signed char arr_12 [10] ;
unsigned int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)15825;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)10353;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 4164636206U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 13622409968288027922ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1356005748U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)8728;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 995377626U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 2821859714U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
