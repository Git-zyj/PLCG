#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 8705288162326826507LL;
signed char var_2 = (signed char)119;
unsigned short var_3 = (unsigned short)48921;
unsigned char var_4 = (unsigned char)200;
unsigned char var_6 = (unsigned char)196;
unsigned char var_7 = (unsigned char)14;
long long int var_8 = -8845547407274657155LL;
int var_9 = -385869335;
unsigned long long int var_10 = 16326153354439195132ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)164;
unsigned int var_12 = 4230081476U;
int var_13 = 589861996;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)44;
long long int var_16 = 6652017406993668853LL;
unsigned char arr_6 [16] [16] [16] ;
unsigned int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)166 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3115192762U : 2266852454U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
