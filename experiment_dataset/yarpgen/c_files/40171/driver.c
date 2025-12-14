#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 293413788;
signed char var_9 = (signed char)103;
unsigned char var_12 = (unsigned char)119;
unsigned int var_14 = 1330627890U;
int zero = 0;
unsigned int var_20 = 305622166U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)111;
unsigned char var_23 = (unsigned char)221;
unsigned int var_24 = 3798749537U;
unsigned long long int var_25 = 9823751544169882309ULL;
unsigned long long int arr_1 [15] ;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 15139608717872443027ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3471579770U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
