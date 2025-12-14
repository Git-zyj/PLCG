#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14358;
unsigned short var_13 = (unsigned short)51082;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)34247;
signed char var_21 = (signed char)34;
unsigned int var_22 = 2675030845U;
signed char var_23 = (signed char)-122;
int var_24 = 1266578081;
signed char var_25 = (signed char)-3;
unsigned long long int var_26 = 4131527671203653738ULL;
unsigned long long int arr_0 [17] ;
int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 16256473924027018954ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1723134905;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
