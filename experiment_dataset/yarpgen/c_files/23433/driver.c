#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -3022785312378448436LL;
long long int var_5 = -1512066314049918937LL;
unsigned char var_6 = (unsigned char)222;
unsigned int var_8 = 1557678996U;
unsigned int var_9 = 1667772252U;
short var_10 = (short)-22829;
int zero = 0;
unsigned char var_13 = (unsigned char)26;
unsigned int var_14 = 3177520494U;
unsigned int var_15 = 3886065369U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2400235053U;
unsigned int var_19 = 4294030200U;
short var_20 = (short)29537;
short var_21 = (short)16221;
short arr_1 [22] ;
long long int arr_2 [22] [22] ;
_Bool arr_8 [24] ;
signed char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-10720;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -4301448861887831122LL : -964632525286585241LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)66;
}

void checksum() {
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
