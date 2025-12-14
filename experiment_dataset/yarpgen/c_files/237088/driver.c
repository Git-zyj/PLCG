#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned char var_4 = (unsigned char)215;
unsigned char var_7 = (unsigned char)178;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)22;
unsigned char var_11 = (unsigned char)161;
int zero = 0;
unsigned short var_12 = (unsigned short)22525;
int var_13 = 169288874;
unsigned char var_14 = (unsigned char)132;
long long int var_15 = 3535373103833371143LL;
long long int var_16 = -3017796744182734424LL;
short var_17 = (short)-5727;
short var_18 = (short)5564;
unsigned short arr_5 [12] ;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)26305;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29215 : (unsigned short)9537;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
