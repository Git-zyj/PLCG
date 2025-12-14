#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2733298125U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)45;
signed char var_5 = (signed char)41;
unsigned int var_6 = 1700823876U;
short var_7 = (short)139;
_Bool var_8 = (_Bool)1;
int var_10 = -203097973;
unsigned short var_11 = (unsigned short)1442;
signed char var_13 = (signed char)38;
long long int var_14 = 8379438911476847462LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-112;
signed char var_19 = (signed char)-11;
int var_20 = 2004931295;
short var_21 = (short)-4740;
_Bool var_22 = (_Bool)1;
unsigned int arr_0 [13] ;
unsigned short arr_1 [13] ;
short arr_2 [13] ;
unsigned int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2752886108U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)10576;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-6250;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3003304665U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
