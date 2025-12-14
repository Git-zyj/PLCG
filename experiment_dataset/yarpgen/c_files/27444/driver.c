#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2534851469082378760LL;
unsigned int var_1 = 2723944237U;
unsigned short var_2 = (unsigned short)37175;
signed char var_4 = (signed char)-100;
int var_6 = -1485402575;
short var_8 = (short)10779;
unsigned char var_12 = (unsigned char)231;
signed char var_15 = (signed char)-2;
int zero = 0;
signed char var_16 = (signed char)-52;
short var_17 = (short)29780;
unsigned int var_18 = 3650330741U;
long long int var_19 = -4868803417659142564LL;
unsigned long long int var_20 = 6563337356433330836ULL;
unsigned int var_21 = 3037104743U;
unsigned long long int var_22 = 17576887743500544928ULL;
short var_23 = (short)-15575;
long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
signed char arr_2 [10] ;
short arr_3 [17] ;
short arr_4 [17] ;
unsigned short arr_5 [17] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -4035702771099714589LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-5370;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-17387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)65315;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)37013;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
