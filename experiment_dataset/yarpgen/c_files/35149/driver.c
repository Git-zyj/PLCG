#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -988780464;
int var_1 = 1493679350;
short var_2 = (short)26657;
int var_3 = -744111974;
short var_7 = (short)16560;
_Bool var_8 = (_Bool)0;
int var_9 = 2066056429;
int zero = 0;
short var_10 = (short)-18162;
int var_11 = 715721287;
unsigned short var_12 = (unsigned short)57192;
unsigned short var_13 = (unsigned short)52618;
_Bool arr_8 [20] ;
unsigned long long int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 7177618645059162854ULL : 5598032927792332314ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
