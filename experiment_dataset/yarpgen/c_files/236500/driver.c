#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned int var_1 = 294995984U;
unsigned int var_2 = 3608439484U;
signed char var_3 = (signed char)2;
long long int var_4 = -4252621726680246010LL;
unsigned int var_5 = 4258187371U;
unsigned short var_6 = (unsigned short)36074;
signed char var_7 = (signed char)77;
unsigned short var_8 = (unsigned short)36475;
short var_9 = (short)-17558;
unsigned long long int var_11 = 15447911831412096743ULL;
short var_12 = (short)168;
signed char var_13 = (signed char)69;
_Bool var_14 = (_Bool)1;
short var_15 = (short)18629;
int var_16 = 1651346882;
int zero = 0;
unsigned char var_17 = (unsigned char)102;
signed char var_18 = (signed char)-74;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)89;
unsigned char arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
