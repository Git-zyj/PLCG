#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4957;
unsigned short var_1 = (unsigned short)43278;
signed char var_5 = (signed char)-96;
unsigned int var_6 = 3452614269U;
int var_7 = -1718014733;
signed char var_8 = (signed char)50;
unsigned int var_12 = 1872441429U;
short var_14 = (short)-16783;
long long int var_16 = 1092602948646239279LL;
int zero = 0;
long long int var_18 = -14915686442590158LL;
unsigned int var_19 = 4027208794U;
unsigned int var_20 = 2525861510U;
_Bool var_21 = (_Bool)1;
int var_22 = 1313959761;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 16461934387732658534ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7412097632607726099ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
