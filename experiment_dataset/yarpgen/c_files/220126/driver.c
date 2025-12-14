#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3113890590U;
long long int var_1 = 5185364006871812927LL;
unsigned short var_2 = (unsigned short)32305;
unsigned long long int var_4 = 12330421341138700508ULL;
long long int var_5 = -5149744627995135547LL;
signed char var_6 = (signed char)-24;
unsigned int var_8 = 2382245917U;
unsigned long long int var_9 = 3723813812994841632ULL;
long long int var_10 = 4484072739215919141LL;
int zero = 0;
long long int var_11 = -2693138734373331448LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)31382;
int var_14 = -1681829486;
int var_15 = -1881567708;
int var_16 = 1577722038;
long long int var_17 = -400478441294557860LL;
unsigned long long int var_18 = 16071904009416521976ULL;
_Bool arr_1 [18] ;
_Bool arr_3 [23] ;
signed char arr_6 [23] [23] ;
signed char arr_9 [23] [23] ;
int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1772306943;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
