#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64655;
signed char var_6 = (signed char)61;
unsigned long long int var_9 = 13497378878337739488ULL;
int var_10 = -1226401263;
unsigned long long int var_11 = 9362495948590673014ULL;
unsigned int var_12 = 3992346741U;
int zero = 0;
long long int var_18 = -3100300906275378506LL;
int var_19 = -121326757;
unsigned long long int var_20 = 296027670326904517ULL;
long long int var_21 = 8772059349003774940LL;
unsigned char var_22 = (unsigned char)99;
unsigned char var_23 = (unsigned char)109;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1880613418132339315LL : -2555651337895503103LL;
}

void checksum() {
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
