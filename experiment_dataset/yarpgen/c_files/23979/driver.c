#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
unsigned long long int var_2 = 13724168095650068676ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-15851;
unsigned int var_6 = 802439752U;
unsigned short var_7 = (unsigned short)1143;
unsigned short var_8 = (unsigned short)27858;
unsigned char var_9 = (unsigned char)60;
long long int var_11 = 1190995684377169249LL;
unsigned char var_12 = (unsigned char)30;
int zero = 0;
short var_13 = (short)16842;
int var_14 = -1536011910;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)14683;
int arr_10 [21] ;
unsigned long long int arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 875138671 : 1831887252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 12323620580354301892ULL : 2087341156195595480ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
