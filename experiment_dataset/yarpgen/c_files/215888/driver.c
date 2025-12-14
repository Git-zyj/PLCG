#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28853;
signed char var_1 = (signed char)-56;
unsigned short var_3 = (unsigned short)9915;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-31796;
unsigned long long int var_11 = 14444061418228539401ULL;
unsigned int var_13 = 2050757055U;
unsigned long long int var_16 = 11083446018488988005ULL;
int zero = 0;
short var_19 = (short)-11813;
unsigned long long int var_20 = 3888497025388936496ULL;
unsigned long long int var_21 = 15310063339662103989ULL;
unsigned long long int var_22 = 16009510554380423341ULL;
short var_23 = (short)-27513;
int var_24 = -658775897;
short var_25 = (short)25986;
int var_26 = 1355828770;
short var_27 = (short)-14879;
signed char var_28 = (signed char)39;
short var_29 = (short)-3243;
unsigned char var_30 = (unsigned char)44;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
signed char arr_2 [15] [15] ;
int arr_3 [15] [15] ;
signed char arr_6 [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
unsigned int arr_12 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 400617436U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2431411835626751801ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 100142489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11369803179444349246ULL : 17250168059617206887ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 647429126U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
