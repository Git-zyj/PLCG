#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 70348306U;
unsigned int var_1 = 304447428U;
unsigned int var_3 = 1998928067U;
long long int var_4 = -3066683049558811625LL;
long long int var_5 = -3132489059505496893LL;
int var_10 = 538838940;
signed char var_13 = (signed char)65;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1283831831500689855LL;
int var_18 = -684158968;
long long int var_19 = 6182794138377475872LL;
unsigned int var_20 = 715746866U;
int var_21 = 1708832962;
unsigned long long int var_22 = 15338398375732871396ULL;
unsigned int arr_2 [15] ;
unsigned int arr_3 [15] [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2366735132U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3852935677U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1369632217U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)39830;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
