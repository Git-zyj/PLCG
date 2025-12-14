#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
signed char var_2 = (signed char)-96;
long long int var_3 = -1757924194703735716LL;
unsigned char var_4 = (unsigned char)222;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-3;
signed char var_7 = (signed char)96;
short var_9 = (short)11462;
int zero = 0;
unsigned long long int var_10 = 15354932025217438871ULL;
unsigned int var_11 = 2011275510U;
unsigned short var_12 = (unsigned short)45400;
unsigned short var_13 = (unsigned short)64806;
short var_14 = (short)19286;
short var_15 = (short)8107;
unsigned short var_16 = (unsigned short)45357;
unsigned short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)57093;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
