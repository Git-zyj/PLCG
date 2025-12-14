#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44180;
unsigned short var_1 = (unsigned short)15185;
unsigned long long int var_2 = 16141034474549208683ULL;
unsigned int var_8 = 2643528153U;
unsigned long long int var_9 = 12161330159444260144ULL;
unsigned short var_12 = (unsigned short)3186;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 7537371055926430919ULL;
int var_17 = -1751567940;
unsigned char var_18 = (unsigned char)62;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)35;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_0 [16] ;
_Bool arr_1 [16] ;
long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 9137105416410406043ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -972466334505748935LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 99634191U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1492093841U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
