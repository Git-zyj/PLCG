#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
int var_1 = 188069889;
short var_3 = (short)-31526;
short var_4 = (short)-22752;
long long int var_6 = -2085459578589248795LL;
signed char var_8 = (signed char)84;
unsigned short var_9 = (unsigned short)32595;
unsigned short var_10 = (unsigned short)58668;
signed char var_11 = (signed char)77;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8592581587969714814LL;
short var_14 = (short)-26336;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-23310;
unsigned int var_17 = 3731177772U;
long long int var_18 = -6850411957463328734LL;
int var_19 = 403390530;
long long int var_20 = -7042454259209658533LL;
long long int var_21 = -5651539494776431216LL;
_Bool arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
