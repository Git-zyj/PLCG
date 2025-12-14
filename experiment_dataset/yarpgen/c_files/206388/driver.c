#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7202639471648959332LL;
unsigned long long int var_1 = 16653142099764679881ULL;
unsigned long long int var_3 = 16010789835532321569ULL;
unsigned int var_8 = 2406662636U;
unsigned long long int var_12 = 5421664721722463080ULL;
int zero = 0;
short var_18 = (short)15073;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)235;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_2 [20] ;
unsigned int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1794134469829838475ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 887295531U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 403550675106198551ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
