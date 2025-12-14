#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-13519;
long long int var_4 = 1092565705245100272LL;
unsigned long long int var_5 = 7416209071823930010ULL;
long long int var_8 = 929807891327926786LL;
short var_13 = (short)-5341;
long long int var_15 = -7996641022226236116LL;
long long int var_16 = 5069988271855619939LL;
int zero = 0;
unsigned long long int var_17 = 12184278978679767593ULL;
long long int var_18 = -4600614498916412093LL;
_Bool var_19 = (_Bool)0;
short arr_2 [13] ;
short arr_3 [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-9403;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)21671;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
