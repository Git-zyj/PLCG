#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 462863122431007027ULL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6772576841873905169LL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-54;
unsigned int var_15 = 2059766440U;
int zero = 0;
unsigned int var_18 = 263347219U;
_Bool var_19 = (_Bool)0;
int var_20 = 1917587741;
unsigned int var_21 = 2086631871U;
unsigned short var_22 = (unsigned short)52475;
unsigned int var_23 = 659826278U;
_Bool arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
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
