#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14499964170564856670ULL;
signed char var_7 = (signed char)97;
unsigned long long int var_12 = 16798843600051790712ULL;
long long int var_14 = -6066919403879077893LL;
int zero = 0;
unsigned short var_16 = (unsigned short)1952;
unsigned long long int var_17 = 4351891109831746139ULL;
short var_18 = (short)10308;
unsigned short var_19 = (unsigned short)26553;
unsigned short var_20 = (unsigned short)58208;
long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -2632323784893946752LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
