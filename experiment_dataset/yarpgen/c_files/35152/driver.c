#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned char var_3 = (unsigned char)198;
unsigned long long int var_5 = 9868328092199322166ULL;
int var_7 = 1017781423;
short var_11 = (short)25580;
short var_13 = (short)17187;
unsigned int var_14 = 1507074354U;
short var_18 = (short)-21461;
unsigned char var_19 = (unsigned char)169;
int zero = 0;
short var_20 = (short)26316;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 18165248995475457006ULL;
int arr_0 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -1834996607;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 16288134855868256263ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
