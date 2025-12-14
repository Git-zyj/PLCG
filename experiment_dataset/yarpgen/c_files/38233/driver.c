#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2878534013850107634ULL;
unsigned short var_1 = (unsigned short)41106;
unsigned short var_2 = (unsigned short)37737;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_9 = 14349374174829129492ULL;
int var_14 = -248985269;
unsigned char var_16 = (unsigned char)60;
unsigned short var_18 = (unsigned short)25739;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)121;
unsigned long long int var_21 = 9187297174164952282ULL;
unsigned short var_22 = (unsigned short)12247;
unsigned int var_23 = 686333091U;
unsigned int arr_4 [17] [17] ;
long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3767193015U : 598196103U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -1228630819063468685LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
