#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned short var_3 = (unsigned short)49070;
unsigned long long int var_6 = 14418519347952595256ULL;
short var_8 = (short)-22825;
int var_9 = -1749720211;
unsigned char var_13 = (unsigned char)211;
unsigned short var_15 = (unsigned short)61295;
int zero = 0;
int var_17 = -1329654836;
unsigned long long int var_18 = 4797161918611714606ULL;
unsigned short var_19 = (unsigned short)33851;
int var_20 = -1855685975;
signed char arr_1 [22] [22] ;
short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)14982 : (short)-14780;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
