#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10207;
short var_3 = (short)656;
unsigned long long int var_4 = 12939734736912833522ULL;
short var_6 = (short)14499;
short var_7 = (short)-1358;
unsigned long long int var_8 = 2023530366495598650ULL;
signed char var_9 = (signed char)-54;
short var_11 = (short)8416;
unsigned char var_12 = (unsigned char)132;
int zero = 0;
signed char var_15 = (signed char)-71;
short var_16 = (short)-11625;
int var_17 = 2112830358;
unsigned short var_18 = (unsigned short)46597;
unsigned char var_19 = (unsigned char)109;
signed char var_20 = (signed char)94;
int var_21 = -708601052;
short var_22 = (short)16940;
unsigned long long int var_23 = 4886868456582172980ULL;
unsigned char var_24 = (unsigned char)43;
short var_25 = (short)-12990;
unsigned char arr_0 [18] [18] ;
int arr_1 [18] ;
long long int arr_2 [18] ;
int arr_4 [12] ;
int arr_5 [12] ;
int arr_11 [12] ;
int arr_18 [25] ;
unsigned char arr_3 [18] ;
int arr_6 [12] ;
unsigned char arr_12 [12] ;
unsigned int arr_13 [12] ;
short arr_16 [12] [12] ;
unsigned char arr_20 [25] ;
_Bool arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1351849935;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -4817980367972713193LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1390932214;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1601825246;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -1094589344;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = -2122785729;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -2057299823;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 1480321089U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-1515;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
