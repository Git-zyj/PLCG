#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61206;
signed char var_6 = (signed char)44;
unsigned int var_7 = 1692311323U;
unsigned short var_12 = (unsigned short)64268;
unsigned char var_13 = (unsigned char)147;
unsigned char var_14 = (unsigned char)211;
unsigned long long int var_15 = 16538988643907964163ULL;
short var_16 = (short)15142;
int zero = 0;
unsigned int var_19 = 2186133015U;
short var_20 = (short)-22631;
unsigned long long int var_21 = 13924721375581960058ULL;
unsigned char var_22 = (unsigned char)71;
int var_23 = 97821640;
unsigned long long int var_24 = 16820888925158924011ULL;
short var_25 = (short)-20403;
signed char var_26 = (signed char)-118;
long long int arr_0 [19] [19] ;
_Bool arr_1 [19] [19] ;
signed char arr_3 [19] [19] ;
unsigned int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 8295879075425835601LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2250942661U : 3552702971U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
