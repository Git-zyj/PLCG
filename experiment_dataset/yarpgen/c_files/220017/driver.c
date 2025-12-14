#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-60;
unsigned short var_6 = (unsigned short)64300;
unsigned long long int var_9 = 15850161832301883031ULL;
short var_10 = (short)-963;
unsigned int var_11 = 1286049722U;
int var_12 = -662416843;
short var_13 = (short)23407;
int zero = 0;
unsigned short var_15 = (unsigned short)23221;
short var_16 = (short)3372;
unsigned int var_17 = 1625353240U;
unsigned short var_18 = (unsigned short)31504;
signed char var_19 = (signed char)73;
signed char var_20 = (signed char)-77;
unsigned char arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)105;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
