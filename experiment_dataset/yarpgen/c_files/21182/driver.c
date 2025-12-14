#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33757;
unsigned int var_1 = 1653006856U;
short var_2 = (short)7950;
unsigned short var_5 = (unsigned short)35107;
unsigned long long int var_7 = 11947607501380522619ULL;
unsigned short var_11 = (unsigned short)27576;
long long int var_12 = 4567114456058120372LL;
int zero = 0;
unsigned int var_13 = 2846098710U;
unsigned short var_14 = (unsigned short)7550;
unsigned int var_15 = 3971657061U;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4057877631709780883ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
