#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1221984579U;
short var_2 = (short)5165;
int var_3 = -692005551;
unsigned char var_4 = (unsigned char)133;
int zero = 0;
unsigned char var_12 = (unsigned char)123;
signed char var_13 = (signed char)27;
unsigned long long int var_14 = 6370320475426834372ULL;
unsigned int var_15 = 2805071860U;
signed char var_16 = (signed char)0;
long long int var_17 = 3934225475463359018LL;
unsigned int var_18 = 4019003658U;
unsigned long long int arr_0 [19] ;
int arr_1 [19] ;
signed char arr_2 [19] [19] ;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 12814550096494864848ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1108473380;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 262632722U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
