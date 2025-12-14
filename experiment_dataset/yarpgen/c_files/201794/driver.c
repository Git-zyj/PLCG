#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
unsigned int var_3 = 3201297233U;
int zero = 0;
int var_11 = 1857302688;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2600515094U;
unsigned int var_14 = 3469897651U;
unsigned int arr_2 [17] [17] ;
unsigned int arr_3 [17] ;
int arr_4 [17] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 921980545U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 10842572U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1636793300;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)75;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
