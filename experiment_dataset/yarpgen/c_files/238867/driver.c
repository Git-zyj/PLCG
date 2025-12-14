#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)62;
signed char var_3 = (signed char)13;
unsigned long long int var_5 = 3544489289117686121ULL;
unsigned int var_6 = 3430208787U;
signed char var_9 = (signed char)3;
signed char var_13 = (signed char)16;
signed char var_14 = (signed char)46;
int zero = 0;
unsigned short var_15 = (unsigned short)5874;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)200;
signed char var_18 = (signed char)32;
signed char var_19 = (signed char)(-127 - 1);
long long int var_20 = -8679789067165058068LL;
unsigned long long int var_21 = 15987776206987355502ULL;
short var_22 = (short)25470;
int arr_0 [24] [24] ;
unsigned int arr_2 [24] ;
_Bool arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 2063976155;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3767543419U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
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
