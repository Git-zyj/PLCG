#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52506;
unsigned int var_4 = 555769427U;
short var_13 = (short)19435;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2168928263638394319ULL;
int zero = 0;
unsigned long long int var_16 = 15358773931536380484ULL;
long long int var_17 = 4741280162849039448LL;
unsigned long long int var_18 = 2508489015792460176ULL;
unsigned short var_19 = (unsigned short)30889;
int arr_0 [11] ;
long long int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1622830083 : -203937373;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1453974175050642872LL : -2685914440200700921LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
