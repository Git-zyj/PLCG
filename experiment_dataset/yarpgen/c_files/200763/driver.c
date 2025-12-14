#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13275;
long long int var_5 = -7537510679367258989LL;
unsigned long long int var_6 = 18188847229654127518ULL;
unsigned int var_10 = 3071222930U;
signed char var_15 = (signed char)87;
short var_16 = (short)-28343;
unsigned long long int var_17 = 6124561625861959192ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)154;
unsigned long long int var_20 = 16014349207296495524ULL;
signed char var_21 = (signed char)-79;
short var_22 = (short)27196;
short var_23 = (short)21512;
int var_24 = -1536122483;
signed char var_25 = (signed char)41;
unsigned char var_26 = (unsigned char)222;
unsigned int arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned int arr_6 [25] [25] [25] ;
unsigned int arr_7 [25] [25] ;
unsigned long long int arr_11 [25] [25] ;
unsigned long long int arr_17 [14] ;
short arr_12 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_15 [14] ;
unsigned long long int arr_16 [14] ;
unsigned int arr_21 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3442271097U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)9219;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3306453779U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 457231831U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 9605444859025439468ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 3230521339306859131ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-29769;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 6694392711566128748ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 8315003970078055601ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 624692039U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
