#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-53;
unsigned int var_5 = 1196526429U;
signed char var_6 = (signed char)-86;
int var_8 = -278858457;
unsigned long long int var_11 = 8312205082707555690ULL;
unsigned long long int var_12 = 17210112283794827237ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)178;
long long int var_14 = -116534207692440089LL;
long long int var_15 = -3428924242734358698LL;
_Bool arr_0 [15] [15] ;
int arr_1 [15] ;
short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1751334774;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)26399 : (short)2811;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
