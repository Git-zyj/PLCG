#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11851177515635472490ULL;
int var_2 = 2123485373;
signed char var_3 = (signed char)-123;
unsigned long long int var_4 = 3828792733046774393ULL;
unsigned long long int var_5 = 7449651400712474986ULL;
short var_6 = (short)-29391;
_Bool var_8 = (_Bool)1;
short var_12 = (short)9604;
unsigned short var_13 = (unsigned short)10861;
short var_15 = (short)-30232;
int zero = 0;
short var_16 = (short)-23313;
unsigned short var_17 = (unsigned short)30114;
unsigned char var_18 = (unsigned char)151;
unsigned short var_19 = (unsigned short)16292;
unsigned short var_20 = (unsigned short)54473;
signed char var_21 = (signed char)70;
signed char arr_0 [19] [19] ;
unsigned long long int arr_4 [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1093807723473499519ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
