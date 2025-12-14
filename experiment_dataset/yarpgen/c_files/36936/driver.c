#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48673;
unsigned int var_5 = 2992639699U;
int var_6 = -1923860121;
unsigned long long int var_9 = 11516581637806081850ULL;
int var_10 = -867829546;
unsigned int var_12 = 1049200649U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2332782037U;
long long int var_15 = -7287528308277038544LL;
short var_16 = (short)18795;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] [22] ;
short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 13709967524327926021ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -3438731756303263345LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)27475;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
