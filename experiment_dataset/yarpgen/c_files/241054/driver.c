#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42624;
long long int var_2 = 1202214136439980976LL;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)16919;
short var_8 = (short)-19428;
int var_9 = -311250788;
unsigned int var_12 = 3219525424U;
short var_13 = (short)-9495;
int zero = 0;
unsigned char var_14 = (unsigned char)25;
signed char var_15 = (signed char)-107;
unsigned short var_16 = (unsigned short)48065;
unsigned short var_17 = (unsigned short)25053;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)13198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 135401551U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)57503;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
