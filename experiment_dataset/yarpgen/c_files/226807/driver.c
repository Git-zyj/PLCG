#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 194707653;
unsigned char var_1 = (unsigned char)130;
unsigned char var_2 = (unsigned char)159;
unsigned int var_3 = 2298191212U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18296774028932680855ULL;
unsigned char var_6 = (unsigned char)110;
short var_7 = (short)14051;
long long int var_9 = 7937080453618004488LL;
unsigned int var_10 = 3186933550U;
int var_12 = -1501041529;
short var_13 = (short)-10508;
int zero = 0;
short var_14 = (short)-17097;
unsigned int var_15 = 2894489880U;
int var_16 = -938021406;
int var_17 = -287080989;
unsigned short var_18 = (unsigned short)32409;
unsigned char arr_0 [20] ;
unsigned char arr_1 [20] ;
long long int arr_2 [20] ;
short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1531204833920989053LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)24334;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
