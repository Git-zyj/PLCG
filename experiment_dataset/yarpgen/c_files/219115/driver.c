#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3066180399688444391LL;
int var_3 = -2073558455;
unsigned short var_4 = (unsigned short)45930;
unsigned long long int var_5 = 18281347524839842247ULL;
unsigned int var_7 = 2882128602U;
unsigned long long int var_8 = 8242312453619643701ULL;
short var_10 = (short)-10136;
signed char var_11 = (signed char)-8;
int zero = 0;
long long int var_12 = 6807162515985364724LL;
long long int var_13 = -7373451893261083399LL;
long long int var_14 = -1491258044838596140LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6669;
int arr_0 [18] ;
long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 333735092;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -8406772790389354886LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
