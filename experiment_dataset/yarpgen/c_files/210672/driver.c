#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 998854013;
unsigned long long int var_6 = 5207829861805623331ULL;
long long int var_10 = -1676530445603747592LL;
int zero = 0;
unsigned char var_12 = (unsigned char)157;
long long int var_13 = -8860395619476220698LL;
unsigned long long int var_14 = 7712237720231793602ULL;
unsigned short var_15 = (unsigned short)62309;
unsigned char var_16 = (unsigned char)8;
unsigned long long int var_17 = 7229298922217096844ULL;
unsigned short var_18 = (unsigned short)1098;
unsigned int arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
int arr_2 [19] [19] ;
signed char arr_3 [19] ;
_Bool arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1040386470U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)47003;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 716767267;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
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
