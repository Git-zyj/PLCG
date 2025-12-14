#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17178940421593731971ULL;
unsigned char var_1 = (unsigned char)233;
unsigned short var_2 = (unsigned short)50359;
unsigned short var_9 = (unsigned short)19320;
short var_12 = (short)19091;
short var_14 = (short)30063;
unsigned long long int var_15 = 6687912163976809714ULL;
unsigned long long int var_16 = 17596826897590359857ULL;
int zero = 0;
int var_17 = -481207544;
int var_18 = -678110262;
unsigned int var_19 = 2703834090U;
unsigned int var_20 = 257831721U;
short var_21 = (short)-16275;
long long int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned long long int arr_3 [13] ;
int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -5472132293632432531LL : -2587747597350033790LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)52873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2564871888689329231ULL : 15073964217003819336ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 786399867 : -1633691757;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
