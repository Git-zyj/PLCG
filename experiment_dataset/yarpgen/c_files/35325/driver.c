#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18040;
signed char var_6 = (signed char)-6;
short var_11 = (short)-8198;
int var_12 = 1743330099;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)72;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8207229926755980065LL;
long long int var_17 = 1393620910385739677LL;
_Bool arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 15518486736834468602ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 5131760386009492311LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
