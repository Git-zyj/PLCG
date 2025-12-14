#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)22284;
unsigned long long int var_4 = 7712519994432419247ULL;
unsigned short var_5 = (unsigned short)23539;
_Bool var_6 = (_Bool)0;
long long int var_7 = 5172390530704007364LL;
signed char var_8 = (signed char)17;
unsigned short var_9 = (unsigned short)36861;
int zero = 0;
int var_10 = -431530667;
unsigned char var_11 = (unsigned char)198;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1754829627617151323LL;
signed char var_14 = (signed char)-62;
_Bool arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
