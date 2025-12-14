#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
long long int var_1 = 8098624867015550494LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)10;
short var_5 = (short)4455;
unsigned long long int var_7 = 14759233822180517654ULL;
unsigned long long int var_9 = 2561363198241969655ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-28734;
int var_14 = -1390389803;
unsigned char var_15 = (unsigned char)189;
unsigned short var_16 = (unsigned short)46176;
unsigned char var_17 = (unsigned char)184;
int zero = 0;
int var_18 = 22980633;
unsigned char var_19 = (unsigned char)114;
unsigned char var_20 = (unsigned char)47;
unsigned int var_21 = 1122010510U;
short var_22 = (short)-10048;
unsigned char var_23 = (unsigned char)32;
unsigned long long int var_24 = 6379500503158290887ULL;
unsigned int var_25 = 2630480179U;
unsigned int var_26 = 3731844852U;
unsigned int var_27 = 829653323U;
short var_28 = (short)-23368;
unsigned int var_29 = 2566155799U;
short var_30 = (short)16418;
short var_31 = (short)-22401;
unsigned char arr_2 [25] [25] ;
short arr_7 [25] ;
long long int arr_11 [25] [25] ;
long long int arr_12 [25] [25] ;
long long int arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)28534;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 8471043718642801913LL : 3928651537530029469LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -8151106913874312031LL : 2357524193736510109LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -3083918191380436443LL : -4204075471417950066LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
