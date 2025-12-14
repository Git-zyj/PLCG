#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26458;
unsigned short var_10 = (unsigned short)42860;
short var_12 = (short)11692;
short var_14 = (short)-28048;
unsigned long long int var_15 = 17823444138140981632ULL;
short var_17 = (short)26431;
unsigned char var_19 = (unsigned char)9;
int zero = 0;
unsigned int var_20 = 4116316615U;
unsigned short var_21 = (unsigned short)25922;
long long int var_22 = -1379316364644385121LL;
short var_23 = (short)27022;
unsigned char var_24 = (unsigned char)133;
unsigned char var_25 = (unsigned char)224;
_Bool arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned int arr_3 [21] ;
long long int arr_4 [21] ;
unsigned int arr_2 [12] ;
long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)63362;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2663090308U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 5993303960981284728LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3478665268U : 3290425037U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3083135588066241260LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
