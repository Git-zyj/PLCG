#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1283;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6830277237693479092ULL;
int zero = 0;
signed char var_14 = (signed char)62;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25150;
unsigned long long int var_17 = 5744110201613607764ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)3246;
int var_20 = 1856377068;
unsigned char arr_0 [17] ;
long long int arr_1 [17] ;
_Bool arr_2 [19] [19] ;
_Bool arr_4 [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -7727708531316522101LL : 2212207223655821028LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -19087279;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
