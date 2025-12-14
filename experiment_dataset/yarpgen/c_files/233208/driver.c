#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 14722227365046912481ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9213239448099394003ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28986;
long long int var_24 = -1325058444324213532LL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
_Bool arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
short arr_5 [22] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)12469;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
