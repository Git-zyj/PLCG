#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 399946256U;
long long int var_3 = -1333365048840715466LL;
unsigned short var_4 = (unsigned short)41085;
int var_8 = -1046251353;
unsigned int var_10 = 1535842920U;
unsigned int var_11 = 3659517204U;
long long int var_13 = 4283592980258614335LL;
short var_14 = (short)29141;
int zero = 0;
unsigned int var_15 = 246730365U;
unsigned int var_16 = 3770835945U;
int var_17 = -1532986582;
unsigned char var_18 = (unsigned char)33;
unsigned int var_19 = 1597461324U;
int var_20 = -2112919129;
unsigned int arr_0 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2415937085U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
