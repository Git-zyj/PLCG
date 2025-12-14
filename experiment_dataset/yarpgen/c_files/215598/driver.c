#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)-12702;
unsigned long long int var_7 = 374745826083974800ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)74;
unsigned int var_13 = 888349396U;
long long int var_14 = 5158093838332204785LL;
short var_15 = (short)-12484;
int zero = 0;
int var_16 = -1327927830;
int var_17 = -999673173;
unsigned char var_18 = (unsigned char)232;
unsigned long long int var_19 = 18188457837170845759ULL;
unsigned char var_20 = (unsigned char)234;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 11429165522008067874ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1195009845;
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
