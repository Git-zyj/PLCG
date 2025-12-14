#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned int var_5 = 1529532455U;
long long int var_6 = -4946925638049821411LL;
short var_9 = (short)32743;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1856525354;
signed char var_17 = (signed char)25;
unsigned int var_18 = 2642536216U;
signed char var_19 = (signed char)84;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short var_22 = (short)14687;
int arr_2 [20] [20] [20] ;
short arr_4 [20] ;
unsigned char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1589626937;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)8948;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
