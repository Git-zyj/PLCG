#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6376;
int var_2 = -125703311;
short var_4 = (short)-3349;
long long int var_5 = -5052298687765955857LL;
signed char var_10 = (signed char)-27;
signed char var_11 = (signed char)-15;
unsigned long long int var_12 = 7191584334116255887ULL;
signed char var_15 = (signed char)-39;
unsigned int var_16 = 2882888558U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3718471384U;
unsigned int var_19 = 588781408U;
unsigned int var_20 = 3161494749U;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
