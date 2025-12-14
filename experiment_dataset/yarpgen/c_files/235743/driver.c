#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -572309954090835029LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 275506575U;
long long int var_4 = -6597552217627322733LL;
unsigned short var_9 = (unsigned short)38680;
unsigned int var_10 = 3955034529U;
unsigned char var_13 = (unsigned char)138;
long long int var_14 = -268183831668271525LL;
unsigned int var_15 = 3498343347U;
long long int var_16 = -5428717730039296006LL;
int zero = 0;
long long int var_17 = -1645620648041994849LL;
long long int var_18 = 1840296639329084760LL;
signed char var_19 = (signed char)110;
int var_20 = -1235320443;
int var_21 = 2053191434;
int arr_0 [14] ;
_Bool arr_1 [14] ;
signed char arr_2 [14] [14] ;
int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1595565757;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1873538760 : -802542890;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
