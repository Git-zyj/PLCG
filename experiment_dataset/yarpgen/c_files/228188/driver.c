#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)54030;
signed char var_7 = (signed char)66;
unsigned long long int var_9 = 7671132043709250103ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)60377;
int var_11 = -2007571248;
unsigned long long int var_12 = 5915672787230804219ULL;
unsigned long long int var_13 = 6069118810903557308ULL;
int var_14 = -1876080364;
unsigned short var_15 = (unsigned short)5676;
int var_16 = 239066933;
short var_17 = (short)-21033;
int arr_1 [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1041521884;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
