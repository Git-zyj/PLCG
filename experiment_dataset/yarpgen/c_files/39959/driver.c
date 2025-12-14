#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
signed char var_3 = (signed char)28;
signed char var_4 = (signed char)101;
long long int var_5 = 4238788467527276743LL;
unsigned int var_7 = 1059305691U;
int var_9 = 1902324776;
unsigned int var_14 = 3035047612U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 633995309U;
int var_21 = -1044847776;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 446931556U;
signed char var_24 = (signed char)97;
short arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
int arr_3 [19] ;
int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)17505;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 11366055582070806645ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -321850273;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -1343562789;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
