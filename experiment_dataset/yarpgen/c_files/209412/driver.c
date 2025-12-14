#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40836;
long long int var_5 = -5138556788020455608LL;
long long int var_8 = 6561485632997501129LL;
long long int var_10 = 740985274669723822LL;
unsigned long long int var_12 = 14282284411527121887ULL;
short var_13 = (short)16550;
unsigned long long int var_15 = 17034194029607534438ULL;
unsigned long long int var_17 = 14202012969224224852ULL;
int zero = 0;
unsigned int var_19 = 1063542183U;
long long int var_20 = -6260393211962700926LL;
int var_21 = -1571403521;
short var_22 = (short)4793;
long long int var_23 = 6234157445551627109LL;
long long int arr_0 [20] [20] ;
short arr_4 [20] [20] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -7693414286944453529LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)18943;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1353772376;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
