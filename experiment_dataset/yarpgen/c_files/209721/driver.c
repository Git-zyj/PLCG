#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)104;
signed char var_5 = (signed char)79;
unsigned short var_8 = (unsigned short)40792;
signed char var_10 = (signed char)41;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_19 = -811078134666476685LL;
unsigned short var_20 = (unsigned short)13731;
unsigned int var_21 = 3542870168U;
short var_22 = (short)-17421;
long long int var_23 = -6211510931929489374LL;
unsigned short var_24 = (unsigned short)19158;
unsigned short arr_2 [17] ;
unsigned short arr_4 [17] ;
_Bool arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)61923;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)38175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
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
