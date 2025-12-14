#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
long long int var_2 = -4766443693013924810LL;
long long int var_5 = -5469930311509628434LL;
unsigned char var_7 = (unsigned char)199;
short var_9 = (short)5623;
short var_10 = (short)-1800;
unsigned char var_11 = (unsigned char)60;
long long int var_13 = 5504072898350454874LL;
int zero = 0;
unsigned char var_17 = (unsigned char)24;
unsigned long long int var_18 = 2769810161905962503ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 841692179;
int var_21 = -680511762;
long long int arr_6 [16] ;
long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -7587172057364514339LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -4720144810884230748LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
