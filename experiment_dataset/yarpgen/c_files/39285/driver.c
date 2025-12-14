#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7210959846574668799LL;
int var_3 = -2133205880;
int var_8 = -1846888496;
unsigned int var_9 = 2825488180U;
int zero = 0;
int var_11 = 1843111253;
long long int var_12 = 8017198350243630588LL;
long long int var_13 = 5022725357457465854LL;
short var_14 = (short)-17742;
unsigned char var_15 = (unsigned char)104;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-14876;
unsigned int var_18 = 3943818311U;
unsigned short var_19 = (unsigned short)22912;
long long int arr_0 [16] [16] ;
unsigned short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1036436153478388527LL : 6912561065818723952LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)36963;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
