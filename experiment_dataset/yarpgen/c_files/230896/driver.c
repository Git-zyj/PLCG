#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58726;
long long int var_3 = 3526334388176378690LL;
unsigned int var_5 = 2182078926U;
short var_6 = (short)14026;
int zero = 0;
int var_10 = -966543921;
unsigned short var_11 = (unsigned short)65388;
int var_12 = 87762043;
long long int var_13 = -4094707900338735786LL;
unsigned long long int var_14 = 6108006587265562336ULL;
unsigned char var_15 = (unsigned char)41;
int arr_0 [24] [24] ;
int arr_1 [24] ;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -326974444;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1803956827;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12129;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
