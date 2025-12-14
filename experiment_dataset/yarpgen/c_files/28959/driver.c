#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28024;
long long int var_6 = 5552051076035826083LL;
short var_11 = (short)-21363;
int var_12 = -1882809786;
unsigned short var_13 = (unsigned short)50173;
int zero = 0;
long long int var_15 = 1351823089309503284LL;
unsigned char var_16 = (unsigned char)44;
unsigned char var_17 = (unsigned char)136;
unsigned int var_18 = 646456238U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4089096596U;
unsigned short var_21 = (unsigned short)6267;
long long int var_22 = 8455545193557283992LL;
long long int var_23 = -6089190410212141522LL;
unsigned long long int arr_0 [14] ;
int arr_1 [14] [14] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3704231956045824044ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1688990830;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 390221950U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
