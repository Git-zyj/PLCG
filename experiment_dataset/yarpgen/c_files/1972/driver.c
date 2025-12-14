#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 87508036U;
short var_1 = (short)-8013;
unsigned short var_2 = (unsigned short)46595;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)15672;
short var_12 = (short)-1543;
long long int var_13 = -5384490910321236366LL;
int zero = 0;
unsigned int var_15 = 942158831U;
unsigned int var_16 = 257737435U;
unsigned char var_17 = (unsigned char)125;
int var_18 = 1365512954;
unsigned short arr_0 [11] ;
short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)43681;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-803;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
