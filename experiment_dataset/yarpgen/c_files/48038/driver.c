#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2224179339U;
unsigned long long int var_1 = 12313619840204387061ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2868609493U;
int var_5 = 53629514;
unsigned short var_11 = (unsigned short)46609;
long long int var_12 = 3107060014536008672LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 699986433U;
int zero = 0;
long long int var_18 = 1376457090324683886LL;
unsigned char var_19 = (unsigned char)139;
unsigned int var_20 = 642294697U;
short var_21 = (short)17079;
unsigned long long int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
unsigned short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 12679421963807754181ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 16642311066273925128ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)25102;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
