#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
long long int var_2 = 8513153886311464370LL;
unsigned char var_7 = (unsigned char)22;
unsigned long long int var_9 = 6562371297668235556ULL;
unsigned int var_10 = 3465886367U;
unsigned char var_11 = (unsigned char)159;
_Bool var_12 = (_Bool)1;
long long int var_15 = -432970602742445364LL;
unsigned long long int var_17 = 8747227907550132982ULL;
int zero = 0;
int var_19 = 936805639;
long long int var_20 = -6256198402158913586LL;
unsigned long long int var_21 = 12281798945647636460ULL;
unsigned long long int var_22 = 6589562446050164110ULL;
unsigned long long int var_23 = 11449975679986493087ULL;
_Bool var_24 = (_Bool)0;
_Bool arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
int arr_3 [19] ;
long long int arr_4 [19] [19] ;
signed char arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 863554812;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -1587487672223526086LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)-31;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
