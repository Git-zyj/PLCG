#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8745;
_Bool var_2 = (_Bool)0;
unsigned short var_10 = (unsigned short)60978;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-121;
unsigned long long int var_15 = 10693779995869512863ULL;
long long int var_17 = 3369079426756988783LL;
signed char var_18 = (signed char)46;
int zero = 0;
signed char var_19 = (signed char)-75;
short var_20 = (short)6967;
unsigned char var_21 = (unsigned char)54;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
signed char arr_4 [11] ;
_Bool arr_6 [11] ;
int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -1361386670;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
