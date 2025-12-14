#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64277;
_Bool var_1 = (_Bool)0;
long long int var_2 = -9069008345861229180LL;
signed char var_3 = (signed char)-86;
unsigned int var_4 = 2218061589U;
unsigned short var_5 = (unsigned short)21034;
unsigned short var_6 = (unsigned short)19416;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)8616;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 12228063299198892232ULL;
signed char var_16 = (signed char)96;
short var_17 = (short)-22934;
signed char var_18 = (signed char)43;
short var_19 = (short)14872;
unsigned long long int arr_5 [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3813078828511474465ULL : 1251607607525408404ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1413088672170065405LL : -6483542871030905231LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
