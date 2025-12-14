#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20171;
signed char var_2 = (signed char)-46;
unsigned long long int var_3 = 8461637718178712966ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-1453;
unsigned char var_7 = (unsigned char)81;
unsigned long long int var_8 = 421289089885526526ULL;
unsigned int var_9 = 1511900094U;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = 414597943;
int zero = 0;
unsigned short var_13 = (unsigned short)35114;
unsigned long long int var_14 = 17956985597732078095ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1380731522U;
_Bool var_17 = (_Bool)0;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
