#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1429532838;
_Bool var_1 = (_Bool)1;
long long int var_2 = 2158348057044485574LL;
unsigned long long int var_3 = 8991548171154617430ULL;
long long int var_5 = -4000623734047275084LL;
short var_6 = (short)-21503;
long long int var_7 = -5296167492221195050LL;
signed char var_8 = (signed char)-102;
unsigned char var_10 = (unsigned char)96;
long long int var_12 = 7057251471436509015LL;
unsigned int var_13 = 623503434U;
signed char var_15 = (signed char)20;
long long int var_16 = 6260234055405122221LL;
unsigned long long int var_17 = 13651865427936366466ULL;
unsigned char var_18 = (unsigned char)39;
int zero = 0;
unsigned int var_19 = 3762965349U;
short var_20 = (short)14769;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2177933369U;
int var_23 = 2129149570;
long long int var_24 = -3545346652170058648LL;
unsigned short var_25 = (unsigned short)55226;
int arr_6 [14] [14] ;
short arr_7 [14] [14] ;
long long int arr_10 [14] ;
short arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 862521300 : 730429820;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-1043 : (short)-29824;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -4552516203461109142LL : 7036561019754571563LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-32365 : (short)-23342;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
