#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_10 = 29797276;
unsigned long long int var_13 = 5406893686764645244ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 10338004875081084567ULL;
int zero = 0;
short var_17 = (short)30454;
long long int var_18 = -5513512649758203622LL;
unsigned short var_19 = (unsigned short)45832;
unsigned long long int var_20 = 4039539595245119761ULL;
long long int var_21 = -1104235917582423799LL;
signed char arr_0 [16] ;
unsigned char arr_2 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1053592407532414924LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
