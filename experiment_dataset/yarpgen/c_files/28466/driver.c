#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1846919132692553114LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-12438;
unsigned char var_5 = (unsigned char)211;
_Bool var_7 = (_Bool)0;
int var_8 = 426427859;
unsigned short var_9 = (unsigned short)3047;
int var_10 = 1031383322;
unsigned long long int var_12 = 14578135273288344112ULL;
unsigned int var_14 = 2888671164U;
int zero = 0;
unsigned short var_15 = (unsigned short)22483;
long long int var_16 = -7259041577129940682LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned char arr_0 [11] ;
unsigned short arr_2 [11] [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)47286;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1743748121548189628LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
