#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11262747081298732372ULL;
unsigned int var_1 = 102509536U;
int var_2 = 2115345215;
unsigned long long int var_3 = 428879704831880076ULL;
unsigned long long int var_4 = 17403874953922209202ULL;
unsigned short var_5 = (unsigned short)23550;
unsigned char var_6 = (unsigned char)230;
short var_7 = (short)16855;
_Bool var_9 = (_Bool)1;
short var_10 = (short)6702;
long long int var_11 = 5902644074262800368LL;
int zero = 0;
int var_12 = -746499178;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3268288668U;
long long int var_15 = 8831539403295286922LL;
long long int var_16 = 5637032539458943515LL;
signed char arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
signed char arr_3 [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 12691417426020827655ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
