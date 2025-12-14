#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17712821747040243502ULL;
unsigned short var_2 = (unsigned short)61973;
unsigned long long int var_3 = 14456347114114564977ULL;
unsigned short var_4 = (unsigned short)44818;
short var_6 = (short)-1975;
long long int var_7 = 158112066822752774LL;
signed char var_8 = (signed char)-23;
unsigned long long int var_9 = 12982828503011342934ULL;
short var_10 = (short)-31203;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2969562660U;
short var_13 = (short)-5069;
unsigned short var_14 = (unsigned short)65377;
unsigned long long int var_15 = 1862507500867093637ULL;
unsigned long long int var_16 = 12080774763422589142ULL;
unsigned short var_17 = (unsigned short)24003;
long long int var_18 = -91686805555501330LL;
_Bool var_19 = (_Bool)1;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
int arr_2 [19] ;
_Bool arr_3 [19] ;
int arr_9 [19] ;
signed char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 7160683573217008299LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12641815395248701642ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1564676339;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1482017079 : 1608139125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)8;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
