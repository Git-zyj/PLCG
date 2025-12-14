#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18373;
unsigned char var_2 = (unsigned char)240;
unsigned long long int var_3 = 16305727981671031337ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)213;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-2;
int var_10 = 906286763;
unsigned long long int var_11 = 6315682634492908109ULL;
signed char var_12 = (signed char)82;
signed char var_13 = (signed char)-45;
int var_14 = 1643712148;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 931996922744164669ULL;
int var_18 = 1570920092;
signed char var_19 = (signed char)38;
unsigned char var_20 = (unsigned char)28;
int var_21 = -511869238;
int var_22 = -788717526;
unsigned long long int var_23 = 6823918571971785209ULL;
int var_24 = -348177840;
unsigned long long int var_25 = 16982206076061393670ULL;
_Bool var_26 = (_Bool)0;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
_Bool arr_6 [14] [14] ;
int arr_7 [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned char arr_10 [14] [14] [14] ;
unsigned long long int arr_13 [25] ;
_Bool arr_14 [25] ;
int arr_18 [25] [25] ;
int arr_20 [25] [25] [25] [25] ;
short arr_21 [25] [25] ;
unsigned char arr_3 [14] ;
int arr_4 [14] ;
signed char arr_11 [14] ;
int arr_12 [14] [14] ;
unsigned long long int arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3975490293221416986ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6668796317417607250ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1389875655 : -1449874285;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 9874309668346803379ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)199 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 6961037391099978318ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 1674482941;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -385079458 : -174776028;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (short)30327;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 907894744 : 392898908;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -1865881551 : -386546199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 3067883568994126008ULL : 734219305666192690ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
