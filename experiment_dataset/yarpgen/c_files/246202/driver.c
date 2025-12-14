#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-278;
short var_7 = (short)-11775;
unsigned int var_11 = 3540766799U;
unsigned long long int var_13 = 17850518397070933400ULL;
short var_14 = (short)-11222;
int var_16 = 1257405609;
int zero = 0;
unsigned long long int var_19 = 15410934397043162620ULL;
unsigned short var_20 = (unsigned short)24113;
short var_21 = (short)16468;
unsigned long long int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 11284019834805232412ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
