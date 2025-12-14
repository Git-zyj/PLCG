#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1822280585210412180LL;
signed char var_3 = (signed char)-45;
unsigned int var_5 = 2895740329U;
unsigned char var_6 = (unsigned char)82;
int var_7 = 1210505852;
long long int var_8 = -7379467343774871877LL;
signed char var_10 = (signed char)35;
unsigned int var_11 = 2758922215U;
unsigned short var_12 = (unsigned short)47801;
unsigned long long int var_14 = 8352301597188173071ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)52;
signed char var_17 = (signed char)-61;
_Bool arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
