#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 798917323388416749ULL;
short var_6 = (short)31696;
long long int var_7 = -2613395381468237701LL;
unsigned long long int var_9 = 2249334636317628376ULL;
_Bool var_10 = (_Bool)1;
int var_11 = 1745433916;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_19 = 3470611012U;
int zero = 0;
long long int var_20 = -439171156204359637LL;
unsigned int var_21 = 637361710U;
long long int var_22 = -1901216694883884479LL;
int var_23 = 857508354;
int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -682290565;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
