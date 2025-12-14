#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2723462735239252537ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_7 = -663891371;
unsigned int var_17 = 3560199448U;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
unsigned short var_21 = (unsigned short)24820;
unsigned int var_22 = 3619836133U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)151;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)7865;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
