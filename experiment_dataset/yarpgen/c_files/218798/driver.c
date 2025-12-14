#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 407821447494137165LL;
unsigned int var_1 = 4127468690U;
unsigned char var_3 = (unsigned char)77;
unsigned short var_6 = (unsigned short)13489;
int zero = 0;
unsigned int var_10 = 539331279U;
unsigned short var_11 = (unsigned short)63974;
unsigned int var_12 = 520546096U;
unsigned int var_13 = 2813216947U;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 15307010731688725385ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -8462974510181427229LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4538185647828929308LL : -5499995353702382051LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
