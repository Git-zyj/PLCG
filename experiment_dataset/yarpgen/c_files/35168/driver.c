#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1010483696;
unsigned char var_3 = (unsigned char)179;
short var_4 = (short)-30157;
unsigned long long int var_6 = 10546490386789281767ULL;
unsigned long long int var_13 = 13154480646444785842ULL;
unsigned int var_14 = 2231168436U;
long long int var_15 = -7119651504717499484LL;
int zero = 0;
unsigned long long int var_17 = 14432295157989383536ULL;
unsigned short var_18 = (unsigned short)61243;
long long int var_19 = -4739629364836802655LL;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)26585;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)25971;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8739 : (unsigned short)13024;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
