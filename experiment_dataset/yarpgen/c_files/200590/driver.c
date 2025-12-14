#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 8522954034397091818LL;
unsigned short var_4 = (unsigned short)14111;
unsigned long long int var_5 = 5994369601503834103ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)68;
unsigned long long int var_9 = 2703745969756997785ULL;
short var_12 = (short)-32192;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3254528810U;
int var_18 = 386341488;
long long int var_19 = 6056223314429080176LL;
long long int var_20 = 5005952842714933715LL;
signed char var_21 = (signed char)-126;
signed char var_22 = (signed char)-84;
_Bool arr_0 [19] ;
unsigned long long int arr_2 [19] ;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4800003932471339809ULL : 4232428980865746121ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)117 : (signed char)-6;
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
