#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14478;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3247931505U;
unsigned short var_6 = (unsigned short)15613;
unsigned short var_10 = (unsigned short)61980;
signed char var_11 = (signed char)-84;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned int var_13 = 2174170880U;
unsigned long long int var_14 = 10769578241586640285ULL;
signed char var_15 = (signed char)-65;
unsigned long long int arr_0 [14] ;
long long int arr_1 [14] ;
long long int arr_2 [14] [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 12046969656718914446ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -3367311617025381463LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3669172704226654593LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)18774;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3684732662U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
