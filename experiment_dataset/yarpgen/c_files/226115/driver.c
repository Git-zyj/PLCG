#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
signed char var_2 = (signed char)94;
unsigned short var_5 = (unsigned short)45139;
int var_10 = 2350443;
unsigned long long int var_11 = 1126671233051832025ULL;
int zero = 0;
unsigned long long int var_13 = 12686717710603519670ULL;
signed char var_14 = (signed char)112;
_Bool var_15 = (_Bool)0;
short var_16 = (short)9777;
short arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-950;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
