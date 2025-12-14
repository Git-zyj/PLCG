#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7942872542909779505ULL;
signed char var_2 = (signed char)-15;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-109;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10990943948881352467ULL;
unsigned short var_10 = (unsigned short)31778;
unsigned char var_12 = (unsigned char)193;
int zero = 0;
signed char var_13 = (signed char)-101;
unsigned int var_14 = 359779369U;
unsigned char var_15 = (unsigned char)34;
signed char var_16 = (signed char)56;
short var_17 = (short)27695;
short var_18 = (short)16493;
int var_19 = -1225050935;
_Bool arr_0 [10] [10] ;
_Bool arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
signed char arr_5 [10] ;
unsigned char arr_6 [10] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 16985959837115842096ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
