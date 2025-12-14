#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
unsigned int var_2 = 4029141669U;
short var_3 = (short)4052;
long long int var_9 = -4269677338888667822LL;
short var_10 = (short)22936;
short var_11 = (short)-20496;
int zero = 0;
unsigned long long int var_12 = 11256366898526920760ULL;
short var_13 = (short)-22092;
signed char var_14 = (signed char)0;
short var_15 = (short)2863;
unsigned long long int arr_1 [21] [21] ;
short arr_2 [21] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 18106435713902948911ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)9507;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-14024;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
