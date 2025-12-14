#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)191;
unsigned char var_7 = (unsigned char)228;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)27309;
unsigned short var_15 = (unsigned short)61254;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)77;
int arr_5 [14] ;
_Bool arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 713803463;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
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
