#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1551790823;
_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_8 = 1409413510;
int var_9 = 1490567074;
int zero = 0;
unsigned int var_10 = 275876745U;
unsigned int var_11 = 1725510669U;
unsigned int var_12 = 498959327U;
int var_13 = 1067896428;
unsigned short var_14 = (unsigned short)36038;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1149996286U;
_Bool var_17 = (_Bool)0;
long long int arr_8 [22] [22] [22] ;
unsigned short arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7372003462874296303LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)63733;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
