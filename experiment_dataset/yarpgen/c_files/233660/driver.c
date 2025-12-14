#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
signed char var_2 = (signed char)-21;
signed char var_3 = (signed char)-76;
int var_4 = 651764877;
short var_5 = (short)29097;
unsigned int var_7 = 1071421225U;
signed char var_9 = (signed char)91;
signed char var_12 = (signed char)-77;
unsigned short var_13 = (unsigned short)28574;
unsigned char var_14 = (unsigned char)165;
int zero = 0;
short var_17 = (short)-17315;
int var_18 = 483160620;
long long int var_19 = -808703535151770509LL;
short var_20 = (short)6819;
long long int var_21 = -8481352628887819089LL;
unsigned char var_22 = (unsigned char)167;
unsigned char arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
