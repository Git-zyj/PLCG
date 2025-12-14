#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22941;
_Bool var_1 = (_Bool)1;
long long int var_2 = -3150204667589133986LL;
long long int var_3 = -1217698530315960539LL;
unsigned short var_4 = (unsigned short)27040;
unsigned long long int var_5 = 2328927683078098851ULL;
unsigned short var_6 = (unsigned short)56444;
unsigned int var_7 = 3401676448U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-17448;
int var_11 = -1883096978;
unsigned long long int var_13 = 11774062644197540648ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-69;
unsigned long long int var_16 = 16819649939618745011ULL;
unsigned int var_17 = 3514139011U;
unsigned long long int var_18 = 19559556695787005ULL;
int var_19 = 185379190;
unsigned char var_20 = (unsigned char)25;
int arr_13 [15] [15] [15] ;
unsigned char arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1076706489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)215;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
