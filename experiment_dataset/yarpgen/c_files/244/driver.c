#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1054499844;
unsigned short var_5 = (unsigned short)7971;
int var_6 = 1915490073;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 11746520652316787274ULL;
long long int var_15 = -7123248294250249333LL;
unsigned long long int var_16 = 3496167377220767830ULL;
unsigned long long int arr_1 [13] ;
_Bool arr_3 [13] [13] [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 13896385004433709090ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14760094523880967394ULL : 6809164862048690818ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
