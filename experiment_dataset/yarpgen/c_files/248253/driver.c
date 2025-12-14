#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2632;
signed char var_1 = (signed char)-4;
unsigned short var_2 = (unsigned short)45394;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)113;
short var_6 = (short)-23553;
unsigned char var_8 = (unsigned char)140;
short var_9 = (short)-8382;
unsigned int var_10 = 2447028071U;
int zero = 0;
unsigned int var_12 = 979308695U;
signed char var_13 = (signed char)-68;
short var_14 = (short)32681;
signed char var_15 = (signed char)46;
long long int var_16 = 8711803404112020889LL;
short var_17 = (short)-29301;
unsigned short arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13355 : (unsigned short)30681;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
