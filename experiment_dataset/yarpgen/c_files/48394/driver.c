#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4216899819U;
unsigned char var_2 = (unsigned char)145;
long long int var_4 = -805925317903551124LL;
int var_12 = -1907718019;
long long int var_14 = 4674616242521911170LL;
long long int var_16 = -503049846398403074LL;
unsigned char var_19 = (unsigned char)63;
int zero = 0;
int var_20 = -2103962928;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2072753595U;
unsigned long long int var_23 = 7240458848979896549ULL;
unsigned short var_24 = (unsigned short)57620;
unsigned long long int arr_0 [17] ;
short arr_2 [17] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 12672142968726424685ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-17424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -482819025;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
