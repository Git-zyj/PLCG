#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned int var_1 = 2193174202U;
unsigned long long int var_2 = 17925697597119017640ULL;
signed char var_3 = (signed char)24;
unsigned char var_4 = (unsigned char)12;
long long int var_6 = -2414381735630912892LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7981381598672611635LL;
long long int var_11 = -4020672172304615838LL;
unsigned long long int var_12 = 11481226220351041632ULL;
unsigned long long int var_14 = 3015085147418390809ULL;
int var_15 = -1134267515;
unsigned int var_16 = 3841570383U;
unsigned short var_17 = (unsigned short)37965;
unsigned char var_18 = (unsigned char)137;
int zero = 0;
short var_19 = (short)20423;
long long int var_20 = 7389632464255678586LL;
long long int var_21 = -2016581066689275440LL;
short var_22 = (short)15481;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 17121370392300665519ULL;
unsigned int var_25 = 1822983932U;
unsigned int arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 1933442037U : 3493928663U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
