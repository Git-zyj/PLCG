#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53190;
unsigned long long int var_7 = 7319143126768289666ULL;
unsigned int var_8 = 2269351365U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_15 = 1370481122;
long long int var_16 = 1162695300423377939LL;
signed char var_17 = (signed char)27;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3570676341U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
