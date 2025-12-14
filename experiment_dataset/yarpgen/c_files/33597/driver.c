#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 618962951424644986ULL;
unsigned int var_3 = 4203306138U;
unsigned int var_7 = 157444461U;
unsigned long long int var_9 = 6438420415243040826ULL;
long long int var_13 = 6486354332252382828LL;
long long int var_15 = 1490833838230620527LL;
int zero = 0;
long long int var_16 = 6711198153358679731LL;
unsigned char var_17 = (unsigned char)5;
unsigned int var_18 = 3120210128U;
signed char var_19 = (signed char)-32;
long long int arr_0 [10] ;
long long int arr_1 [10] [10] ;
long long int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -5733718518434826595LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -6789209951730710351LL : -5512321812150516664LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -2875281657004961794LL : 292949917215765457LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
