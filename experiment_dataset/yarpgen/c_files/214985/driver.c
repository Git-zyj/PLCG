#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1239061105;
short var_1 = (short)-31321;
int var_2 = -1633966334;
long long int var_6 = 7463547446140892178LL;
unsigned long long int var_7 = 10490667658725430255ULL;
long long int var_9 = -1987081468274014112LL;
unsigned long long int var_12 = 16450333587166456531ULL;
short var_13 = (short)15706;
unsigned char var_14 = (unsigned char)20;
unsigned int var_15 = 3777136383U;
unsigned char var_16 = (unsigned char)57;
int zero = 0;
unsigned short var_17 = (unsigned short)5827;
unsigned int var_18 = 3780595156U;
signed char var_19 = (signed char)30;
unsigned short var_20 = (unsigned short)13069;
short arr_0 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned long long int arr_3 [20] [20] ;
short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)20186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48273;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 10013166703457441508ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)32275;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
