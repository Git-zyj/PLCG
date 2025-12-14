#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 822237193U;
unsigned int var_1 = 1300329028U;
unsigned short var_3 = (unsigned short)15096;
int var_8 = -2022267416;
unsigned char var_9 = (unsigned char)215;
short var_11 = (short)1467;
long long int var_12 = 2344012558580082750LL;
unsigned short var_13 = (unsigned short)14364;
unsigned char var_14 = (unsigned char)152;
unsigned short var_15 = (unsigned short)32014;
int zero = 0;
unsigned short var_16 = (unsigned short)27620;
long long int var_17 = 35555243808477106LL;
long long int var_18 = 6735102663208778972LL;
long long int var_19 = -34331412742515313LL;
unsigned char var_20 = (unsigned char)69;
unsigned int var_21 = 4212100951U;
long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 5393403940175856617LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
