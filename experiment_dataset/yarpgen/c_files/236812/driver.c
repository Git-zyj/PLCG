#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13642272667728036447ULL;
unsigned short var_2 = (unsigned short)22647;
long long int var_4 = 7564793052797954859LL;
unsigned int var_6 = 3762036500U;
int var_7 = -1617215077;
unsigned int var_8 = 3814743271U;
int var_9 = -1733560771;
int zero = 0;
unsigned long long int var_10 = 8405989945779676391ULL;
signed char var_11 = (signed char)89;
long long int var_12 = -5643518437405039278LL;
unsigned int var_13 = 505496211U;
unsigned int var_14 = 1700417724U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)52498;
unsigned short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
signed char arr_4 [23] ;
unsigned short arr_6 [23] ;
short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)47777;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5822608663810067968ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)34123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-18322 : (short)-9958;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
