#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -22489345;
_Bool var_2 = (_Bool)0;
int var_3 = -2060180269;
long long int var_6 = 1128398843764516260LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6591963992306944577ULL;
long long int var_14 = 8810062187559563318LL;
int zero = 0;
long long int var_15 = 1588167959105911565LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)32;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3865413934900055981ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 8706952079992082965ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)161;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
