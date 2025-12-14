#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
int var_3 = 1936143009;
unsigned int var_4 = 130797685U;
long long int var_7 = -8906244485743364754LL;
short var_12 = (short)22478;
int zero = 0;
unsigned int var_15 = 2592959663U;
unsigned char var_16 = (unsigned char)169;
unsigned int var_17 = 4059718160U;
signed char var_18 = (signed char)-1;
signed char var_19 = (signed char)122;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-22364;
long long int var_22 = -392968290641444480LL;
unsigned long long int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
short arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 11294525817161752928ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 3220130693727514534ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-24603;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
