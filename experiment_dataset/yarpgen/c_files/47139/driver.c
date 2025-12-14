#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 936134960U;
signed char var_3 = (signed char)-119;
unsigned int var_4 = 346884345U;
unsigned char var_6 = (unsigned char)237;
long long int var_7 = -3307217639479952164LL;
long long int var_8 = -8643921152317205407LL;
unsigned char var_9 = (unsigned char)92;
long long int var_10 = -1493408764311931184LL;
short var_11 = (short)22608;
int zero = 0;
long long int var_13 = -2924211113298124648LL;
int var_14 = 1774056627;
int var_15 = 211371695;
unsigned int var_16 = 3655704991U;
long long int var_17 = -6353948316819204929LL;
int arr_6 [22] [22] ;
short arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1840606748;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)15237;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
