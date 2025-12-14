#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38509;
unsigned long long int var_1 = 8397947092205909231ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 2293598045877100854ULL;
short var_7 = (short)27973;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)90;
unsigned short var_11 = (unsigned short)63636;
short var_13 = (short)15701;
short var_14 = (short)17163;
unsigned short var_15 = (unsigned short)31487;
int zero = 0;
int var_17 = -1729325239;
unsigned short var_18 = (unsigned short)20716;
unsigned long long int var_19 = 8583596866224489461ULL;
unsigned short var_20 = (unsigned short)23118;
short arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
unsigned short arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned short arr_4 [17] ;
_Bool arr_5 [17] ;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-4678;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)19939;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)30750;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2230043283U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)45663;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)20975;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
