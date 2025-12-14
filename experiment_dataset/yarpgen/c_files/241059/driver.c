#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned short var_2 = (unsigned short)15141;
unsigned int var_3 = 4203654798U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8326900466925851924ULL;
long long int var_9 = 243305400797808407LL;
long long int var_11 = 7659414258070741347LL;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
long long int var_13 = -6106923498111179937LL;
short var_14 = (short)27404;
signed char var_15 = (signed char)-97;
int var_16 = -422412146;
unsigned short var_17 = (unsigned short)22412;
short var_18 = (short)23556;
short var_19 = (short)28873;
short arr_0 [12] ;
unsigned char arr_4 [16] ;
long long int arr_5 [16] [16] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)12173;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -2101455969134178608LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1860795621233725944ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 15483627558939752565ULL : 5497585484225317760ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
