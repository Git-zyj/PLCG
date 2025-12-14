#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55877;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 9809707575028908138ULL;
unsigned short var_7 = (unsigned short)35428;
unsigned short var_9 = (unsigned short)51236;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3083120450U;
short var_13 = (short)5935;
signed char var_14 = (signed char)48;
int zero = 0;
int var_15 = 604696796;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2566431547U;
unsigned long long int var_18 = 3849321531280440384ULL;
long long int var_19 = 2638831206022183940LL;
int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 301617586;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)32437;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
