#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 383380291;
unsigned int var_1 = 2672129351U;
unsigned long long int var_4 = 14391951019689280610ULL;
unsigned short var_5 = (unsigned short)35353;
long long int var_6 = -5771106744154526983LL;
int var_8 = -1979059355;
short var_9 = (short)15707;
short var_10 = (short)29623;
short var_11 = (short)-3700;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 15915178122027820478ULL;
unsigned long long int var_15 = 501951102347546993ULL;
unsigned long long int var_16 = 6094817003464143950ULL;
int arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2145997848;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
