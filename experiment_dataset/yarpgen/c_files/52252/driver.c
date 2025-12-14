#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned int var_1 = 2187390979U;
long long int var_4 = -8176716777000488728LL;
unsigned int var_5 = 2002658406U;
short var_7 = (short)-21542;
signed char var_8 = (signed char)3;
unsigned int var_10 = 4114788642U;
int zero = 0;
int var_15 = -1837985765;
unsigned long long int var_16 = 14091891478873902620ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)36;
unsigned short arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned int arr_3 [13] [13] ;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)22913;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)15535;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2673748279U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3239827049U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
