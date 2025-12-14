#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5117451096309397143LL;
int var_2 = 951068108;
int var_8 = -2075268179;
unsigned char var_9 = (unsigned char)241;
long long int var_11 = -7370802894246986982LL;
int zero = 0;
unsigned int var_12 = 2253703661U;
long long int var_13 = -2920162223539329993LL;
short var_14 = (short)23757;
long long int var_15 = 9063391670924348029LL;
int var_16 = -352030064;
long long int var_17 = -5121317227398488282LL;
unsigned char var_18 = (unsigned char)129;
long long int arr_1 [13] ;
short arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5986366119794857354LL : 5656216261513965398LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)28353;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
