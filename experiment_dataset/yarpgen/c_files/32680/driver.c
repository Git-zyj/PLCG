#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12316363248132580019ULL;
unsigned long long int var_2 = 8235387064921326277ULL;
unsigned long long int var_3 = 5507649738643317991ULL;
unsigned long long int var_6 = 2461430383383610252ULL;
_Bool var_9 = (_Bool)1;
int var_10 = -1341785786;
unsigned long long int var_12 = 3495134348835152943ULL;
int zero = 0;
unsigned long long int var_13 = 5233406338783190563ULL;
unsigned long long int var_14 = 8712735465014714942ULL;
int var_15 = -669465107;
unsigned int var_16 = 1427626529U;
unsigned int var_17 = 1959173398U;
unsigned short arr_0 [13] [13] ;
int arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)30941;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -304864124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)9658;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
