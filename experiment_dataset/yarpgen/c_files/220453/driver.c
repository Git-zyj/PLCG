#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35423;
int var_2 = 1709754207;
signed char var_10 = (signed char)-62;
short var_11 = (short)-1413;
unsigned int var_18 = 3947636910U;
int zero = 0;
int var_20 = 1744845427;
unsigned long long int var_21 = 17501450509614683732ULL;
signed char var_22 = (signed char)118;
unsigned long long int var_23 = 3293238528216963361ULL;
short var_24 = (short)27268;
unsigned long long int var_25 = 9622207196960581457ULL;
unsigned int var_26 = 3615677260U;
signed char var_27 = (signed char)18;
int var_28 = 1097792727;
signed char arr_2 [24] [24] ;
unsigned char arr_14 [24] [24] [24] ;
signed char arr_16 [24] [24] [24] [24] [24] ;
int arr_34 [25] [25] ;
int arr_3 [24] ;
short arr_4 [24] ;
unsigned short arr_8 [24] [24] ;
short arr_9 [24] ;
long long int arr_19 [24] ;
long long int arr_20 [24] ;
unsigned char arr_36 [25] ;
long long int arr_37 [25] ;
unsigned long long int arr_38 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_34 [i_0] [i_1] = 774921374;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1806359004;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)2236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)38065;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)-21570;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 4753594930397759495LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = -1859195494939418532LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (unsigned char)176 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 4010480735830734075LL : 2455772360401375590LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 75010341719787953ULL : 14956182215951272214ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
