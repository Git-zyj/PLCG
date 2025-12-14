#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1522664755;
short var_2 = (short)9270;
unsigned char var_3 = (unsigned char)100;
unsigned int var_4 = 3441624262U;
unsigned short var_5 = (unsigned short)17405;
short var_6 = (short)26907;
unsigned long long int var_7 = 17095094248501477820ULL;
unsigned int var_8 = 2028935284U;
int var_10 = -990731682;
int var_11 = -2114480816;
unsigned long long int var_12 = 9070917107197202269ULL;
unsigned char var_13 = (unsigned char)52;
unsigned int var_15 = 950667015U;
int zero = 0;
long long int var_16 = -7400360954649495305LL;
unsigned short var_17 = (unsigned short)56292;
unsigned long long int var_18 = 6230764799748029034ULL;
short var_19 = (short)-18038;
short var_20 = (short)-5377;
unsigned short var_21 = (unsigned short)25550;
short arr_6 [24] [24] [24] ;
long long int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)16444 : (short)552;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3649438258924581126LL : 3355401682133474454LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
