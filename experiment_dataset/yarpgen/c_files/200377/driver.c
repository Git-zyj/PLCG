#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2865667614086703503LL;
unsigned int var_1 = 1372708339U;
unsigned short var_2 = (unsigned short)62112;
unsigned short var_3 = (unsigned short)56013;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-1233;
unsigned short var_8 = (unsigned short)41265;
int var_9 = -2029084001;
long long int var_10 = 4307062024524599931LL;
unsigned long long int var_11 = 7878254015093294316ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)61063;
unsigned char var_16 = (unsigned char)70;
unsigned int var_17 = 245456372U;
unsigned short arr_0 [25] ;
_Bool arr_1 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)34723;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1623084775;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
