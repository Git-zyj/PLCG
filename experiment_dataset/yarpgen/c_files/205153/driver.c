#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 240656893;
unsigned short var_2 = (unsigned short)32476;
unsigned char var_4 = (unsigned char)41;
unsigned int var_8 = 2385284129U;
unsigned int var_9 = 3519302870U;
long long int var_11 = 1794074232858915272LL;
unsigned int var_12 = 3715033963U;
short var_14 = (short)-28586;
int zero = 0;
unsigned long long int var_16 = 13907739447005086698ULL;
unsigned int var_17 = 2137778671U;
unsigned long long int var_18 = 6749568801845727646ULL;
long long int var_19 = 3229331678160968116LL;
unsigned short var_20 = (unsigned short)46484;
long long int var_21 = 3016295909497493561LL;
short var_22 = (short)433;
signed char arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
unsigned short arr_6 [25] ;
unsigned char arr_8 [25] ;
unsigned short arr_4 [25] ;
unsigned int arr_5 [25] ;
signed char arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)56265;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)209 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)9190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 943066568U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)18 : (signed char)83;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
