#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned int var_1 = 1056523141U;
int var_2 = 2075681024;
unsigned int var_4 = 811451068U;
int var_6 = -702758717;
signed char var_8 = (signed char)(-127 - 1);
short var_9 = (short)17600;
long long int var_11 = 5726544147615480485LL;
long long int var_12 = 1617797286455316596LL;
unsigned short var_14 = (unsigned short)26214;
unsigned long long int var_16 = 11532899926375345450ULL;
int zero = 0;
long long int var_17 = 3196769604954031450LL;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)82;
short var_20 = (short)-18019;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)63608;
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
