#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 877331968U;
unsigned int var_6 = 599054636U;
unsigned int var_7 = 803154361U;
unsigned int var_11 = 2098423193U;
unsigned int var_13 = 1911247088U;
unsigned int var_15 = 3044893710U;
unsigned int var_17 = 3005580902U;
int zero = 0;
unsigned int var_20 = 1216550208U;
unsigned int var_21 = 810444330U;
unsigned int var_22 = 3254583678U;
unsigned int var_23 = 44206179U;
unsigned int var_24 = 2145570187U;
unsigned int var_25 = 2687606255U;
unsigned int var_26 = 3578667077U;
unsigned int var_27 = 1271819346U;
unsigned int var_28 = 3791263011U;
unsigned int var_29 = 188618902U;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned int arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2333177463U : 2595762391U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3105396218U : 1414787146U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3634925155U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
