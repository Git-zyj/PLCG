#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned char var_3 = (unsigned char)141;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)53742;
signed char var_10 = (signed char)-127;
unsigned char var_11 = (unsigned char)152;
signed char var_13 = (signed char)27;
int zero = 0;
long long int var_16 = -7745300719639861923LL;
short var_17 = (short)14590;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 14997905792947095570ULL;
int var_20 = -1429744694;
unsigned long long int var_21 = 15029815192493635476ULL;
unsigned short var_22 = (unsigned short)17817;
unsigned short var_23 = (unsigned short)26274;
unsigned short var_24 = (unsigned short)16709;
int arr_1 [15] ;
short arr_6 [15] [15] [15] ;
_Bool arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1086923788;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-26473;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
