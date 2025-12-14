#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3170621138U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1181054088U;
long long int var_8 = -5085501441259804400LL;
unsigned int var_10 = 644155726U;
short var_14 = (short)-26378;
unsigned int var_17 = 1307569234U;
int zero = 0;
unsigned char var_18 = (unsigned char)197;
signed char var_19 = (signed char)84;
int var_20 = -1602395197;
unsigned long long int var_21 = 7402654054542663267ULL;
unsigned int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3654725001U : 2534056724U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
