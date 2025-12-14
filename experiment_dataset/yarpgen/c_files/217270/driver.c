#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
unsigned char var_1 = (unsigned char)151;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)110;
unsigned char var_5 = (unsigned char)36;
int var_6 = -1310635172;
int var_8 = -629279651;
unsigned short var_11 = (unsigned short)5540;
unsigned long long int var_15 = 14591376004945067996ULL;
int zero = 0;
unsigned long long int var_16 = 13826644450904838436ULL;
int var_17 = 202220823;
short var_18 = (short)-998;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5820454175888661438ULL;
unsigned char var_21 = (unsigned char)53;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)63;
unsigned long long int var_24 = 17746676020723960812ULL;
unsigned char var_25 = (unsigned char)226;
short var_26 = (short)-28798;
signed char arr_0 [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
