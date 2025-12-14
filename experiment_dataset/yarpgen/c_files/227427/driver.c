#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1476203637;
signed char var_6 = (signed char)-77;
unsigned char var_9 = (unsigned char)31;
long long int var_13 = 5571678442663738688LL;
unsigned int var_14 = 1437645926U;
unsigned char var_17 = (unsigned char)7;
int zero = 0;
long long int var_18 = 4697568568532073838LL;
int var_19 = 591931825;
unsigned short var_20 = (unsigned short)57546;
long long int var_21 = 6506210539203993232LL;
int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 185381198;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
