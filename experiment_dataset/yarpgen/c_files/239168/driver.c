#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 828644118141047631ULL;
int var_2 = 675562270;
unsigned int var_3 = 4138943155U;
short var_4 = (short)-1920;
short var_5 = (short)20023;
unsigned int var_7 = 3386552395U;
short var_8 = (short)16136;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -9184134606735157837LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-22;
unsigned long long int var_14 = 3992657482494597179ULL;
short var_15 = (short)30200;
unsigned int var_16 = 57225488U;
int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned char arr_2 [19] [19] [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 691318377;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 16532838607969801280ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
