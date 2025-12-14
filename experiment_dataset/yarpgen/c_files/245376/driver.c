#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3721631135U;
unsigned char var_2 = (unsigned char)193;
unsigned char var_3 = (unsigned char)181;
_Bool var_6 = (_Bool)0;
short var_7 = (short)12622;
signed char var_9 = (signed char)-121;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3823606363U;
unsigned char var_12 = (unsigned char)222;
unsigned char var_13 = (unsigned char)119;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)57694;
signed char var_19 = (signed char)-89;
unsigned int var_20 = 3794304998U;
unsigned long long int var_21 = 7337459092914232034ULL;
unsigned long long int var_22 = 16151553193876335129ULL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1977109723U;
unsigned char arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned long long int arr_3 [20] ;
_Bool arr_12 [20] [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1402439062243670508ULL : 2202638179250782985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 10539079132538875648ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 11226449204009708323ULL : 15561544915493602736ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
