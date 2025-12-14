#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 172059214;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = 7580794683144996292LL;
unsigned short var_18 = (unsigned short)55300;
unsigned char var_19 = (unsigned char)213;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 18179228401141830830ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
