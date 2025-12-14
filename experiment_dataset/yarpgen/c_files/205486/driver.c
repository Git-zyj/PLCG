#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1614515646;
int var_5 = -516110042;
int var_13 = 388560741;
int zero = 0;
unsigned int var_14 = 4083873314U;
int var_15 = 1737512389;
unsigned long long int var_16 = 15196203858518237015ULL;
short var_17 = (short)22357;
short var_18 = (short)-2806;
short var_19 = (short)-25523;
short arr_0 [25] ;
int arr_1 [25] ;
unsigned long long int arr_6 [24] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)4106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1265692961;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 6170378373278450798ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1676332085;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
