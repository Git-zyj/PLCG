#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
int var_1 = 138234240;
int var_2 = -1219587220;
long long int var_3 = 6347604626000608007LL;
short var_4 = (short)4356;
signed char var_5 = (signed char)105;
signed char var_7 = (signed char)-23;
unsigned char var_8 = (unsigned char)94;
signed char var_9 = (signed char)123;
signed char var_10 = (signed char)-14;
unsigned int var_11 = 2770887613U;
long long int var_12 = -505834046948566936LL;
long long int var_13 = 314276692561886647LL;
int zero = 0;
unsigned char var_14 = (unsigned char)53;
int var_15 = 1914942246;
short var_16 = (short)20025;
long long int var_17 = -6133540999052737571LL;
int var_18 = 158936454;
unsigned long long int var_19 = 1176441406104932806ULL;
unsigned int var_20 = 3992023824U;
int var_21 = 107774355;
unsigned short var_22 = (unsigned short)50194;
_Bool var_23 = (_Bool)1;
signed char arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
short arr_2 [24] ;
signed char arr_3 [24] [24] ;
unsigned long long int arr_4 [24] ;
short arr_9 [24] [24] [24] [24] ;
int arr_12 [25] [25] ;
unsigned long long int arr_14 [25] ;
unsigned long long int arr_15 [25] [25] ;
unsigned long long int arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-27244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8548830911365766869ULL : 17102385038717608764ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)31562;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 1639164762;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 5671679195534544066ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 361598471727876931ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 3010136983090198261ULL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
