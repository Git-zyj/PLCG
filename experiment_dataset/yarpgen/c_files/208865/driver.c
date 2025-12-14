#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7821594061982365826LL;
int var_2 = -1161454765;
long long int var_4 = -5043719080577471856LL;
_Bool var_5 = (_Bool)0;
long long int var_10 = -8830412599486434278LL;
short var_13 = (short)13568;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 502116697U;
unsigned short var_19 = (unsigned short)59931;
_Bool var_20 = (_Bool)0;
int var_21 = -1483538073;
unsigned short arr_0 [12] [12] ;
long long int arr_1 [12] ;
int arr_2 [12] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61828;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 5524543468497429581LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1487419040;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
