#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8917945493731602370LL;
unsigned short var_2 = (unsigned short)57102;
_Bool var_3 = (_Bool)0;
short var_6 = (short)3024;
int var_7 = -1227837162;
unsigned int var_8 = 1083392299U;
int zero = 0;
unsigned long long int var_10 = 12315912950084625704ULL;
unsigned long long int var_11 = 1379670111682170852ULL;
unsigned short var_12 = (unsigned short)61238;
unsigned int var_13 = 1915860082U;
long long int arr_1 [11] ;
long long int arr_2 [11] ;
unsigned int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1789719898944058696LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 7881471275108715099LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 4073897086U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
