#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17581;
unsigned long long int var_2 = 12630039171104203079ULL;
unsigned short var_4 = (unsigned short)33264;
signed char var_5 = (signed char)12;
signed char var_7 = (signed char)54;
int var_9 = 901463575;
int var_11 = -1349017705;
signed char var_13 = (signed char)-38;
unsigned long long int var_15 = 3923391753674243916ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)57472;
unsigned long long int var_17 = 15645163026131236576ULL;
unsigned int var_18 = 885929140U;
unsigned long long int var_19 = 289334395753546026ULL;
unsigned char var_20 = (unsigned char)218;
unsigned short var_21 = (unsigned short)9610;
unsigned short var_22 = (unsigned short)58845;
signed char var_23 = (signed char)34;
unsigned short var_24 = (unsigned short)41670;
unsigned char arr_1 [13] ;
int arr_4 [15] ;
_Bool arr_2 [13] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -2094657408;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -614800490;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
