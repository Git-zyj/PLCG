#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 199182755;
unsigned int var_11 = 2388765130U;
_Bool var_15 = (_Bool)0;
long long int var_17 = 6470960063085031473LL;
int zero = 0;
unsigned long long int var_20 = 17660227346567460951ULL;
unsigned long long int var_21 = 16491337945357310853ULL;
unsigned short var_22 = (unsigned short)48600;
int var_23 = 1926735474;
long long int var_24 = -8464831915420398347LL;
int var_25 = -986413491;
unsigned long long int arr_0 [24] [24] ;
short arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 11455093584828196600ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-23434;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
