#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1675;
unsigned char var_4 = (unsigned char)127;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)48761;
unsigned int var_15 = 3583652858U;
int zero = 0;
unsigned long long int var_18 = 16561343275229929186ULL;
short var_19 = (short)-24348;
unsigned long long int var_20 = 12796788900567788967ULL;
unsigned char var_21 = (unsigned char)6;
unsigned int var_22 = 1636817073U;
unsigned long long int var_23 = 1876511555664365267ULL;
unsigned long long int var_24 = 17740565091678199346ULL;
unsigned int arr_0 [10] ;
long long int arr_1 [10] ;
unsigned long long int arr_4 [10] ;
unsigned int arr_5 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3311037385U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 938616704982820233LL : -2492382717187786873LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 5089377485782652262ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 2595482544U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3656598186U : 1381073697U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 17201974393048254920ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
