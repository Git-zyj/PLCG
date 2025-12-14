#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1492722885U;
unsigned long long int var_1 = 8145990668224459625ULL;
signed char var_2 = (signed char)0;
signed char var_5 = (signed char)-88;
int var_7 = 248324467;
int var_11 = 370982538;
int var_12 = 475723853;
int zero = 0;
unsigned long long int var_18 = 6701396558160694641ULL;
signed char var_19 = (signed char)-3;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-18;
unsigned int var_22 = 839241031U;
unsigned int var_23 = 1584567047U;
signed char var_24 = (signed char)105;
int var_25 = -596946401;
signed char arr_1 [24] ;
unsigned char arr_3 [24] [24] [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9938 : (unsigned short)30192;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
