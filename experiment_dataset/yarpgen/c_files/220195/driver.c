#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1230467077751308594LL;
unsigned long long int var_4 = 1425698054273686624ULL;
signed char var_6 = (signed char)-31;
short var_9 = (short)-28533;
long long int var_10 = 1071529981317738654LL;
unsigned short var_11 = (unsigned short)61898;
long long int var_12 = 1831773612688545747LL;
unsigned int var_14 = 191701660U;
long long int var_16 = 5943084036334440LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)15703;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)8190;
unsigned short var_21 = (unsigned short)23907;
_Bool arr_0 [18] ;
unsigned long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 16929455344994720584ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
