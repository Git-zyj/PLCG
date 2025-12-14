#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27294;
unsigned int var_2 = 143616094U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)56;
long long int var_5 = 7932349616943045990LL;
unsigned char var_6 = (unsigned char)27;
unsigned short var_9 = (unsigned short)45319;
int zero = 0;
unsigned short var_12 = (unsigned short)40746;
long long int var_13 = 3762491352990125436LL;
unsigned char var_14 = (unsigned char)220;
unsigned int var_15 = 225420561U;
signed char var_16 = (signed char)25;
long long int var_17 = 8422050157077512676LL;
int arr_0 [15] ;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 19263401;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 834263713U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
