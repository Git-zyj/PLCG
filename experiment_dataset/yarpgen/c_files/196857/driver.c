#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)236;
short var_5 = (short)32056;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)21691;
unsigned int var_12 = 511766511U;
long long int var_13 = 7144119685854351799LL;
unsigned int var_16 = 3572658863U;
int zero = 0;
unsigned char var_18 = (unsigned char)22;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)62595;
unsigned short var_21 = (unsigned short)10877;
long long int var_22 = -8514208398526535392LL;
unsigned char var_23 = (unsigned char)206;
unsigned short arr_1 [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)38307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2532375670U : 1669321881U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
