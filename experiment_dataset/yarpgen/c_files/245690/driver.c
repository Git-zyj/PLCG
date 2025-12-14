#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14098522346799273465ULL;
unsigned int var_9 = 737696126U;
unsigned char var_10 = (unsigned char)193;
unsigned char var_11 = (unsigned char)194;
long long int var_12 = -5533731953934584428LL;
unsigned char var_14 = (unsigned char)77;
unsigned short var_15 = (unsigned short)1148;
int var_17 = -1107218977;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -680024255;
unsigned short var_20 = (unsigned short)2625;
unsigned char var_21 = (unsigned char)162;
unsigned int arr_0 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4198621122U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5084120861458797726ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
