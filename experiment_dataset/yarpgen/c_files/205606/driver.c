#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2567644827054050158LL;
unsigned int var_2 = 1139736929U;
unsigned char var_4 = (unsigned char)229;
signed char var_11 = (signed char)-107;
long long int var_14 = -2147102881122629310LL;
int zero = 0;
unsigned int var_16 = 1759184136U;
long long int var_17 = -5737850438992005816LL;
signed char var_18 = (signed char)42;
unsigned char var_19 = (unsigned char)34;
unsigned char var_20 = (unsigned char)207;
unsigned int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2716428399U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
