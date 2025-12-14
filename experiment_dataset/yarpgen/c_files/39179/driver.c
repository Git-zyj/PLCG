#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_10 = (unsigned short)57273;
unsigned long long int var_11 = 6573729362111516872ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int var_18 = 1269486524;
unsigned long long int var_19 = 7145664428632739831ULL;
int zero = 0;
unsigned int var_20 = 3463904728U;
short var_21 = (short)28695;
short var_22 = (short)-3295;
unsigned long long int arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2045181111022326208ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)63819;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
