#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1804546672U;
long long int var_5 = 1549262951314948299LL;
long long int var_12 = -8952498664273197166LL;
unsigned short var_13 = (unsigned short)33304;
long long int var_16 = 9022190801667919881LL;
unsigned int var_17 = 2942682233U;
unsigned int var_18 = 1780648093U;
int zero = 0;
unsigned int var_20 = 3418849022U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-4994;
unsigned int arr_1 [20] ;
short arr_3 [20] [20] [20] ;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1940571435U : 770155721U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-11119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 635301163U : 4071164447U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
