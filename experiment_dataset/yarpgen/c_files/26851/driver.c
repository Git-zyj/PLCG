#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34047;
unsigned short var_1 = (unsigned short)42493;
unsigned char var_2 = (unsigned char)184;
unsigned long long int var_3 = 1539602074466354103ULL;
long long int var_6 = 5773518073141972182LL;
unsigned long long int var_7 = 13828171048539958019ULL;
unsigned char var_8 = (unsigned char)184;
short var_9 = (short)20611;
int zero = 0;
unsigned char var_11 = (unsigned char)106;
unsigned int var_12 = 449493326U;
unsigned long long int var_13 = 13086506698121798987ULL;
unsigned int var_14 = 3135821820U;
signed char var_15 = (signed char)48;
long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -8286968060835686304LL : 7331584351023062008LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
