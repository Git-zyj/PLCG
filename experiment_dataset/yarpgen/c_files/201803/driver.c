#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -315165515;
_Bool var_2 = (_Bool)0;
int var_5 = 2089938799;
signed char var_6 = (signed char)11;
int var_7 = 1338583018;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)163;
unsigned int var_11 = 1128151282U;
long long int var_12 = -1140057273006613896LL;
unsigned short var_13 = (unsigned short)36920;
int zero = 0;
short var_17 = (short)-13020;
unsigned int var_18 = 3814309931U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)3623;
short var_21 = (short)-4281;
long long int arr_0 [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -3393419194048044641LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5115464670513217169ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
