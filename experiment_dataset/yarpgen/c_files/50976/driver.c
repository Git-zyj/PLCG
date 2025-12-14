#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5612081411525848645LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-69;
short var_7 = (short)-17206;
long long int var_9 = 5738111817504608444LL;
unsigned int var_12 = 1831210723U;
int zero = 0;
int var_13 = 425932295;
_Bool var_14 = (_Bool)1;
short var_15 = (short)28817;
signed char var_16 = (signed char)-50;
short var_17 = (short)2728;
_Bool arr_1 [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 15533342794675303892ULL;
}

void checksum() {
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
