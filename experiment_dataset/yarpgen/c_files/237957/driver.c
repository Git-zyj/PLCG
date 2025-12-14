#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1983513989U;
unsigned short var_1 = (unsigned short)36540;
long long int var_2 = 7810631558310779194LL;
unsigned short var_3 = (unsigned short)10890;
unsigned int var_5 = 2222167996U;
unsigned char var_6 = (unsigned char)53;
short var_8 = (short)23828;
unsigned long long int var_9 = 5870669353812657760ULL;
unsigned int var_10 = 2673595011U;
unsigned int var_11 = 1028379434U;
int zero = 0;
int var_13 = 768004309;
signed char var_14 = (signed char)-125;
long long int var_15 = 8560087850239244125LL;
int var_16 = 2011954831;
unsigned int var_17 = 2336178686U;
unsigned short var_18 = (unsigned short)48570;
long long int var_19 = 1703143016190229603LL;
unsigned char arr_0 [20] ;
_Bool arr_1 [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)83;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
