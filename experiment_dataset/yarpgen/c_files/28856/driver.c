#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 302720283U;
unsigned int var_3 = 2340374175U;
unsigned int var_4 = 2767121674U;
int var_8 = -204730717;
unsigned char var_9 = (unsigned char)143;
unsigned char var_10 = (unsigned char)221;
unsigned char var_15 = (unsigned char)222;
unsigned long long int var_16 = 16311250694347042951ULL;
unsigned short var_18 = (unsigned short)40507;
int zero = 0;
int var_19 = -1008853560;
unsigned int var_20 = 3531578458U;
unsigned short var_21 = (unsigned short)7971;
unsigned int var_22 = 4124184544U;
int var_23 = 792618864;
short var_24 = (short)25469;
unsigned short arr_0 [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)34474;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)5263;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
