#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned char var_4 = (unsigned char)159;
signed char var_8 = (signed char)-75;
signed char var_15 = (signed char)113;
int zero = 0;
unsigned int var_17 = 1334225147U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1413054434U;
unsigned char var_20 = (unsigned char)158;
unsigned long long int var_21 = 5333546229257285090ULL;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 4071084809866548362LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
