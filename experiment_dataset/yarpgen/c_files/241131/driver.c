#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9928;
unsigned short var_4 = (unsigned short)14828;
unsigned long long int var_5 = 16364962078428779958ULL;
unsigned long long int var_7 = 9941560782164265570ULL;
long long int var_10 = -3955734046752281169LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58328;
short var_13 = (short)17484;
unsigned short var_14 = (unsigned short)23767;
unsigned char var_15 = (unsigned char)122;
unsigned int var_16 = 3933312113U;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned int arr_2 [19] ;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)7352;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)51169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 279845625U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)-73;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
