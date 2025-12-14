#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2187690532U;
unsigned short var_1 = (unsigned short)46353;
int var_5 = 1837419200;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3491678310507257992LL;
unsigned char var_9 = (unsigned char)31;
unsigned short var_10 = (unsigned short)22944;
unsigned short var_11 = (unsigned short)26443;
unsigned int var_12 = 2574953U;
unsigned int var_15 = 2432371641U;
unsigned int var_16 = 1771761641U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1757557923;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)20252;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8790522152171304353LL;
_Bool arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
