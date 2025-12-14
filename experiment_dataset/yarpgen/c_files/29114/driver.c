#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 299612860362724200LL;
long long int var_5 = 7449539418532380254LL;
short var_6 = (short)14464;
long long int var_7 = 1468990909717460019LL;
short var_8 = (short)25551;
int var_11 = 626929687;
int zero = 0;
long long int var_20 = 6680693598895162093LL;
int var_21 = 565004553;
short var_22 = (short)-5369;
long long int var_23 = 1346356567596686185LL;
long long int var_24 = 2025277751779712446LL;
unsigned short var_25 = (unsigned short)33212;
long long int var_26 = -4244801434295031021LL;
signed char arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1941866915U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1361477438U : 1568131432U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
