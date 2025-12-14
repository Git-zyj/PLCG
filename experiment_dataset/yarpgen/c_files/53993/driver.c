#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10517126508601705076ULL;
unsigned int var_5 = 4129963141U;
unsigned char var_9 = (unsigned char)189;
unsigned short var_10 = (unsigned short)55772;
int zero = 0;
unsigned int var_20 = 1889464965U;
unsigned long long int var_21 = 2032165395821497310ULL;
unsigned long long int var_22 = 4096118689403725272ULL;
unsigned char var_23 = (unsigned char)241;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [12] ;
short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1392941085U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-31803;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
