#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 2017691594;
int var_5 = 110763379;
unsigned int var_6 = 2559433170U;
int var_7 = 526488375;
long long int var_11 = 3980647565772106802LL;
signed char var_14 = (signed char)-98;
unsigned short var_15 = (unsigned short)3128;
short var_17 = (short)13676;
int zero = 0;
short var_18 = (short)2801;
signed char var_19 = (signed char)108;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-25627;
unsigned long long int var_22 = 6218168081229279798ULL;
long long int var_23 = -3941709671097093824LL;
unsigned char arr_2 [23] ;
unsigned int arr_3 [23] ;
signed char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1362151621U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)67;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
