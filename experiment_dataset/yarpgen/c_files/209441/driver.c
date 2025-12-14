#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -6001202263572365367LL;
unsigned short var_5 = (unsigned short)34125;
unsigned long long int var_9 = 12706038819808650184ULL;
signed char var_10 = (signed char)81;
int var_11 = 1978518574;
unsigned long long int var_12 = 11872543502602540824ULL;
long long int var_13 = -7574394897381819901LL;
unsigned short var_15 = (unsigned short)13473;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
signed char var_20 = (signed char)-71;
int var_21 = -1978937321;
signed char var_22 = (signed char)47;
long long int var_23 = 6710886779512470590LL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)21069;
int arr_0 [21] ;
int arr_1 [21] ;
unsigned short arr_4 [24] ;
_Bool arr_5 [24] ;
short arr_6 [24] ;
signed char arr_7 [21] ;
_Bool arr_10 [21] ;
short arr_2 [21] ;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 834001472 : -1964826530;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1467664152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)35759;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-3579;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)23262 : (short)-7229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)101 : (signed char)68;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
