#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28892;
unsigned char var_4 = (unsigned char)183;
unsigned long long int var_9 = 15373315075414978189ULL;
long long int var_10 = -823521874594513520LL;
unsigned long long int var_12 = 6107122186241988354ULL;
unsigned char var_13 = (unsigned char)68;
unsigned long long int var_17 = 8609952079148450824ULL;
int zero = 0;
unsigned int var_18 = 2227205802U;
long long int var_19 = 7534447422087304394LL;
unsigned char var_20 = (unsigned char)158;
unsigned int var_21 = 3226067772U;
unsigned char var_22 = (unsigned char)209;
long long int var_23 = 398469747168316516LL;
unsigned long long int var_24 = 15460528746797691393ULL;
short var_25 = (short)24059;
unsigned long long int var_26 = 10064303262743339460ULL;
short arr_0 [25] ;
unsigned short arr_3 [25] ;
long long int arr_4 [25] ;
unsigned int arr_5 [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)26810;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17749 : (unsigned short)46661;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 589865504746832119LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1584405367U : 2647243192U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -2064008523 : -615113667;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
