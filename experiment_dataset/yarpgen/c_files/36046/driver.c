#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)141;
unsigned short var_12 = (unsigned short)10653;
short var_13 = (short)-22472;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
long long int var_19 = 5074807338454989628LL;
short var_20 = (short)4142;
unsigned short var_21 = (unsigned short)11728;
unsigned short var_22 = (unsigned short)14812;
unsigned char var_23 = (unsigned char)184;
long long int var_24 = -9156373074256382395LL;
int var_25 = -732332218;
short arr_4 [24] [24] ;
short arr_5 [24] ;
unsigned long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-15094 : (short)19816;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 1795784625777270038ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
