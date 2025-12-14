#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31517;
unsigned int var_2 = 1506646373U;
int var_4 = -2075250314;
signed char var_6 = (signed char)75;
short var_10 = (short)-13736;
int var_11 = -384579130;
int zero = 0;
long long int var_13 = -6287007456844700200LL;
long long int var_14 = 2858974074658308186LL;
int var_15 = -1223980093;
short var_16 = (short)-13155;
long long int var_17 = -8067917041188373154LL;
unsigned char var_18 = (unsigned char)84;
int var_19 = -2023953351;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16004106741733175922ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3024655056U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
