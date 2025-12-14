#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2237865927U;
unsigned short var_5 = (unsigned short)61253;
long long int var_6 = 5592177463366096151LL;
int var_11 = 63925388;
unsigned char var_12 = (unsigned char)60;
unsigned int var_13 = 1928546079U;
signed char var_14 = (signed char)52;
int zero = 0;
short var_17 = (short)26836;
unsigned short var_18 = (unsigned short)64790;
int var_19 = 2040174333;
unsigned long long int var_20 = 6433543402251787787ULL;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)66;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
