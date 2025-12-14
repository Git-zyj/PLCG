#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8744023864283912968LL;
short var_1 = (short)-9152;
unsigned int var_2 = 1328121574U;
unsigned long long int var_4 = 14316105092958897515ULL;
unsigned short var_8 = (unsigned short)60942;
unsigned short var_12 = (unsigned short)10683;
unsigned long long int var_13 = 17654917074043626933ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)216;
signed char var_17 = (signed char)58;
short var_18 = (short)2861;
int var_19 = -1532499812;
signed char var_20 = (signed char)-19;
unsigned long long int var_21 = 13696148880163815499ULL;
unsigned int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
short arr_4 [16] ;
unsigned short arr_8 [21] ;
short arr_5 [16] [16] ;
short arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1779386213U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)7660;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-28501;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)26134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)6875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)16892 : (short)-18130;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
