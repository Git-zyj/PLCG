#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1596265196U;
unsigned short var_4 = (unsigned short)31088;
unsigned short var_8 = (unsigned short)55179;
short var_9 = (short)2887;
short var_11 = (short)-14629;
unsigned short var_12 = (unsigned short)55659;
int zero = 0;
unsigned long long int var_18 = 8304677881569197029ULL;
signed char var_19 = (signed char)41;
short var_20 = (short)16480;
unsigned long long int var_21 = 17566346872099924977ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 15778191393512137644ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
