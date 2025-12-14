#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9357142942774754263ULL;
long long int var_1 = -7388720380640464503LL;
unsigned int var_2 = 2513330279U;
signed char var_3 = (signed char)-113;
unsigned short var_5 = (unsigned short)64149;
unsigned long long int var_6 = 8972677802745940458ULL;
unsigned char var_7 = (unsigned char)235;
unsigned long long int var_8 = 16296106066523711190ULL;
unsigned long long int var_9 = 5310960407343548500ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
short var_14 = (short)-31574;
unsigned int var_15 = 682376541U;
long long int var_16 = 900184301274410845LL;
int var_17 = -567749274;
unsigned int var_18 = 4157675374U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2316031353U;
unsigned long long int var_21 = 8438413018584494843ULL;
unsigned char var_22 = (unsigned char)244;
unsigned short arr_3 [17] ;
unsigned short arr_6 [22] ;
_Bool arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)1673;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)9003;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
