#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 830907227521280186ULL;
signed char var_2 = (signed char)-20;
unsigned int var_3 = 3510456242U;
unsigned int var_4 = 2243066414U;
short var_5 = (short)-24132;
signed char var_6 = (signed char)77;
int var_8 = -1022517312;
int zero = 0;
unsigned long long int var_13 = 2317560330328104670ULL;
unsigned int var_14 = 1588582479U;
int var_15 = -2013559058;
unsigned long long int var_16 = 13582506039139905348ULL;
int var_17 = -1814053901;
unsigned long long int arr_21 [12] ;
short arr_22 [12] [12] [12] [12] [12] ;
long long int arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 11369531648989815021ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-8812;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = 7404017136151157665LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
