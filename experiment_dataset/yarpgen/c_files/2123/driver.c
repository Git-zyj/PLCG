#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4853525743141595079LL;
long long int var_3 = 3360639224502797685LL;
unsigned short var_4 = (unsigned short)64775;
unsigned int var_5 = 39273659U;
short var_6 = (short)21645;
long long int var_7 = -8337008252371797272LL;
unsigned short var_9 = (unsigned short)4728;
long long int var_10 = -8876344894228919658LL;
int zero = 0;
signed char var_11 = (signed char)-51;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)23722;
short var_14 = (short)-9335;
unsigned int var_15 = 1737543898U;
signed char var_16 = (signed char)-70;
short arr_0 [22] ;
unsigned short arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
unsigned int arr_5 [22] ;
short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)3735;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24528;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 8229353889332391244ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1567854008U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)-15390;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
