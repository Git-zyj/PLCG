#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 768719433;
_Bool var_4 = (_Bool)0;
long long int var_5 = -394104793561339429LL;
unsigned short var_6 = (unsigned short)19297;
unsigned short var_8 = (unsigned short)23832;
short var_11 = (short)-23931;
int zero = 0;
unsigned short var_16 = (unsigned short)46371;
int arr_3 [11] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 779433021 : 1160293559;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3335771063246612681LL : 1468371357720713967LL;
}

void checksum() {
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
