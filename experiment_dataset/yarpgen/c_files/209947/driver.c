#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)32269;
short var_7 = (short)-669;
unsigned int var_8 = 1259102445U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 14061280009665224545ULL;
unsigned char var_14 = (unsigned char)131;
int zero = 0;
short var_15 = (short)-16252;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)292;
unsigned long long int var_18 = 16195660887761464924ULL;
int var_19 = 1274237736;
long long int var_20 = -2302772656531180038LL;
int var_21 = -2038880357;
short var_22 = (short)31556;
_Bool arr_4 [16] [16] [16] ;
long long int arr_9 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -5185814782099362108LL : 7300379326101975506LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
