#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41504;
long long int var_8 = 2131970713083292000LL;
signed char var_9 = (signed char)-54;
unsigned int var_11 = 2237199986U;
short var_12 = (short)-2674;
int zero = 0;
unsigned int var_13 = 1710768173U;
long long int var_14 = -3103346810737827113LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14021890602588935488ULL;
int var_17 = -1516756092;
short var_18 = (short)-23961;
unsigned short var_19 = (unsigned short)38103;
unsigned int var_20 = 3153576430U;
unsigned char var_21 = (unsigned char)130;
int var_22 = 1483177991;
int var_23 = -736350372;
unsigned int var_24 = 87663110U;
signed char arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned int arr_2 [14] ;
short arr_3 [25] ;
int arr_4 [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7632733075577896796LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 809431960U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-20435;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2117498699;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -1578562676;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
