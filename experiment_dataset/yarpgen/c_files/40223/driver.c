#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-55;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6368953837227786513LL;
int zero = 0;
long long int var_20 = 5749357521436050125LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10976068081743594311ULL;
long long int var_23 = 5752765844955313248LL;
unsigned char arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
_Bool arr_2 [20] ;
short arr_3 [20] ;
signed char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)9954;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
