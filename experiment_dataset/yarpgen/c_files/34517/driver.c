#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9130175606593334010ULL;
unsigned long long int var_1 = 11390214331650466828ULL;
unsigned short var_3 = (unsigned short)32137;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2139291091721254458LL;
unsigned int var_9 = 337058890U;
unsigned int var_10 = 1624981798U;
signed char var_13 = (signed char)54;
unsigned char var_14 = (unsigned char)186;
int zero = 0;
unsigned int var_18 = 1355474747U;
int var_19 = 1278711880;
unsigned long long int var_20 = 7068026849355802865ULL;
short var_21 = (short)-20164;
int arr_0 [16] ;
unsigned int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -986441310;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 487811556U : 565068189U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
