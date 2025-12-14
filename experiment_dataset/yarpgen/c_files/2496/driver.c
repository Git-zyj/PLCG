#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
int var_3 = 493894330;
int var_4 = 1548322991;
unsigned short var_8 = (unsigned short)733;
unsigned char var_9 = (unsigned char)22;
unsigned long long int var_10 = 12514964900845970255ULL;
unsigned int var_12 = 3636122551U;
unsigned int var_15 = 3689064344U;
int zero = 0;
long long int var_16 = 7252103966710389425LL;
unsigned int var_17 = 4042193469U;
int var_18 = -1234133218;
unsigned int var_19 = 3252270316U;
unsigned long long int var_20 = 13064195427505257004ULL;
unsigned short arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55546 : (unsigned short)36666;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9697213428168102571ULL : 5538103236134041240ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
