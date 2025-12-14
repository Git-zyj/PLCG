#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3016;
int var_4 = -1173240583;
signed char var_5 = (signed char)-63;
short var_6 = (short)19818;
short var_10 = (short)-22923;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)32132;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57651;
unsigned long long int arr_1 [25] [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 11682188604192324182ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54297 : (unsigned short)8260;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
