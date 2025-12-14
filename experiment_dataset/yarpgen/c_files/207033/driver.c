#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13453923978783961152ULL;
int var_3 = -1594186103;
unsigned char var_5 = (unsigned char)1;
unsigned long long int var_6 = 371735716164510516ULL;
unsigned char var_8 = (unsigned char)11;
unsigned char var_9 = (unsigned char)225;
int var_11 = 2011651491;
unsigned long long int var_18 = 5597140264354401031ULL;
int var_19 = 88018371;
int zero = 0;
int var_20 = -888611105;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)13;
unsigned int var_23 = 3805429614U;
int arr_0 [14] ;
unsigned char arr_6 [14] [14] [14] [14] ;
_Bool arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2088429001;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
