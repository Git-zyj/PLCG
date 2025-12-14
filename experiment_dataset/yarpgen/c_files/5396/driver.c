#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6022342885360341046LL;
signed char var_1 = (signed char)92;
long long int var_2 = -2067623845650098150LL;
long long int var_6 = 6099138141709869465LL;
unsigned int var_8 = 485454243U;
unsigned long long int var_11 = 1200418190090306712ULL;
signed char var_13 = (signed char)112;
unsigned char var_15 = (unsigned char)72;
unsigned int var_16 = 2330188316U;
int zero = 0;
unsigned int var_18 = 3658857478U;
long long int var_19 = -4569206447880041340LL;
signed char var_20 = (signed char)-42;
int arr_0 [15] ;
unsigned char arr_2 [15] [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1093312852;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -2043671615520809019LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
