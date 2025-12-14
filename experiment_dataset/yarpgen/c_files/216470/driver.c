#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 120176357U;
unsigned int var_2 = 3257076840U;
unsigned int var_4 = 3885942928U;
unsigned int var_5 = 164606768U;
unsigned long long int var_7 = 6109755039677210909ULL;
unsigned int var_9 = 2482075214U;
long long int var_10 = 1779300737258028300LL;
unsigned long long int var_12 = 4624006153814889605ULL;
unsigned int var_14 = 1127542080U;
unsigned long long int var_17 = 11802670170600049993ULL;
int zero = 0;
unsigned int var_18 = 2622791143U;
unsigned int var_19 = 3887425103U;
unsigned int var_20 = 1869592325U;
unsigned int var_21 = 3349563265U;
unsigned int var_22 = 3191396422U;
long long int arr_0 [13] ;
long long int arr_4 [13] ;
unsigned long long int arr_5 [13] [13] ;
unsigned int arr_6 [13] [13] [13] [13] ;
long long int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8215633692880034235LL : -3857018225071599099LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -8128418944481945434LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 17389745964826401391ULL : 5316457271649695967ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2074930650U : 1207934886U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -6318107927096539645LL : 724808792495642294LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
