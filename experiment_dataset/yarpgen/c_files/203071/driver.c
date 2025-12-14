#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3467;
long long int var_3 = 1457287219310064847LL;
long long int var_5 = 768389073164119475LL;
signed char var_8 = (signed char)25;
short var_11 = (short)16245;
short var_13 = (short)-11868;
signed char var_14 = (signed char)73;
unsigned long long int var_16 = 4231065315759475473ULL;
long long int var_17 = 700437356244520989LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)32565;
_Bool var_21 = (_Bool)1;
short var_22 = (short)13909;
_Bool var_23 = (_Bool)0;
short arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)31373;
}

void checksum() {
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
