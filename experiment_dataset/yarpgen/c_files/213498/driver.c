#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
int var_2 = -484307189;
int var_10 = 938271855;
signed char var_11 = (signed char)-41;
unsigned short var_12 = (unsigned short)13212;
_Bool var_14 = (_Bool)1;
int var_17 = -1217201292;
unsigned long long int var_18 = 4189370379520884068ULL;
int zero = 0;
long long int var_19 = -2124227294585994327LL;
short var_20 = (short)-19616;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 492747784139759826ULL;
unsigned int var_23 = 3732790380U;
short var_24 = (short)-24591;
_Bool var_25 = (_Bool)1;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
