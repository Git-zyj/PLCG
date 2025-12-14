#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
unsigned long long int var_5 = 728401926580688862ULL;
unsigned long long int var_10 = 3804683312341175761ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -1037775176;
int zero = 0;
unsigned int var_16 = 504193743U;
unsigned long long int var_17 = 10942191697156729274ULL;
long long int var_18 = -2260621340625511804LL;
unsigned char var_19 = (unsigned char)31;
unsigned int var_20 = 3101257534U;
short var_21 = (short)21996;
_Bool arr_0 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2026713957464650786LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
