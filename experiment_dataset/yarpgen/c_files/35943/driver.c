#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24483;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6992179724018035533LL;
long long int var_5 = 2252948805426260907LL;
long long int var_10 = 3001694930963601099LL;
long long int var_11 = 4083153096485948555LL;
unsigned int var_12 = 691192283U;
long long int var_13 = 5819343843768385001LL;
int zero = 0;
unsigned int var_15 = 3923459439U;
unsigned char var_16 = (unsigned char)162;
long long int var_17 = -8592860116339534345LL;
unsigned long long int var_18 = 4496948767872825289ULL;
long long int var_19 = -1617534883101286715LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = 1489652702;
_Bool arr_9 [10] ;
unsigned short arr_14 [23] ;
long long int arr_4 [10] [10] ;
_Bool arr_7 [10] ;
signed char arr_12 [10] ;
_Bool arr_15 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned short)65062;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -4245140309767016614LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
