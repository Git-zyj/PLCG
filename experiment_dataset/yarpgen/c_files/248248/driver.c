#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49047;
int var_1 = -1542224699;
long long int var_2 = -3272650918949100017LL;
int var_3 = 939076052;
signed char var_4 = (signed char)-16;
signed char var_5 = (signed char)10;
short var_7 = (short)1993;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 403395886;
unsigned int var_12 = 1811014820U;
long long int var_13 = 4723938704066722608LL;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
int arr_2 [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3230031184177184097ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1414689756;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)71;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
