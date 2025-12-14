#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 5174868271994139167ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)33;
short var_6 = (short)7659;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)22455;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)896;
unsigned long long int var_19 = 6229812230682042131ULL;
unsigned long long int arr_0 [20] [20] ;
short arr_1 [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 7906169746950470397ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)30474;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
