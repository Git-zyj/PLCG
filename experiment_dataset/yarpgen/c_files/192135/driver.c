#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18074;
unsigned long long int var_3 = 12540016691054002400ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)33;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20324;
long long int var_11 = 1301534090551887799LL;
long long int var_12 = 1929274290968273617LL;
int zero = 0;
short var_13 = (short)-20606;
short var_14 = (short)25485;
long long int var_15 = 4692495869396890360LL;
unsigned char var_16 = (unsigned char)36;
unsigned long long int var_17 = 13804102715515955494ULL;
short var_18 = (short)-4067;
long long int var_19 = -9130849285159570437LL;
unsigned long long int var_20 = 10686070777769342123ULL;
long long int var_21 = 5872465691740593869LL;
_Bool arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 10795479766722029367ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 11340372456767985404ULL : 11147637405309275166ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 9666981302486740484ULL : 12477033475406621661ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11545552616062783171ULL : 13206814013964671331ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
