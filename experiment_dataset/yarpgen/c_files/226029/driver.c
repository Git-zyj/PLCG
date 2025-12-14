#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11632225178464595281ULL;
unsigned long long int var_1 = 4857524669000783493ULL;
long long int var_2 = -7881336006585055873LL;
int var_3 = 1693296403;
unsigned char var_5 = (unsigned char)228;
int zero = 0;
signed char var_14 = (signed char)35;
unsigned long long int var_15 = 10182861694583856072ULL;
unsigned int var_16 = 166443551U;
unsigned char var_17 = (unsigned char)60;
unsigned int var_18 = 772400794U;
unsigned long long int arr_3 [10] [10] ;
unsigned char arr_5 [10] ;
_Bool arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 2074031876979772314ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
