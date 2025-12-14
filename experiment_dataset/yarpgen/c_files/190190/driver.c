#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17775;
_Bool var_1 = (_Bool)0;
int var_2 = 927942376;
unsigned char var_3 = (unsigned char)215;
unsigned long long int var_4 = 6823200995648236089ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)116;
unsigned short var_11 = (unsigned short)58412;
int var_12 = 783588977;
unsigned long long int var_13 = 1021304408816506477ULL;
signed char var_14 = (signed char)47;
int zero = 0;
int var_15 = 1241531341;
unsigned long long int var_16 = 15776281131360853826ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-54;
long long int var_19 = -5534811936287760494LL;
long long int var_20 = -4591615459809214109LL;
unsigned int var_21 = 3729261902U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)70;
unsigned long long int var_24 = 14472632856679818544ULL;
unsigned short var_25 = (unsigned short)44701;
signed char arr_0 [16] ;
unsigned int arr_3 [12] ;
int arr_4 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
short arr_9 [12] [12] ;
_Bool arr_10 [12] [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] [12] ;
unsigned int arr_11 [12] ;
_Bool arr_16 [12] ;
_Bool arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 352003580U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 124230431;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1016402821275029129LL : 2793086130126920313LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)7770;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12309297256918537448ULL : 17505279051303383021ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 4903438U : 4071673612U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
