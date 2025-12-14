#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)61107;
unsigned long long int var_6 = 6879282609298724672ULL;
unsigned int var_7 = 3623199556U;
int var_9 = 1873880138;
short var_10 = (short)-27090;
unsigned char var_12 = (unsigned char)79;
unsigned long long int var_13 = 3477928460436270854ULL;
short var_16 = (short)-2859;
unsigned long long int var_17 = 15095361973068929462ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)179;
short var_21 = (short)12248;
unsigned char var_22 = (unsigned char)50;
_Bool var_23 = (_Bool)0;
short var_24 = (short)9924;
short var_25 = (short)-2251;
signed char var_26 = (signed char)118;
unsigned long long int var_27 = 10887666540264044208ULL;
unsigned long long int var_28 = 17097035763956453243ULL;
unsigned long long int arr_4 [13] ;
int arr_7 [13] [13] [13] ;
short arr_14 [20] ;
unsigned long long int arr_11 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 14540641967355247142ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -905981734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)-13327;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 7058956941297838763ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
