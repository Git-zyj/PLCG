#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7574948170970008603LL;
unsigned char var_4 = (unsigned char)220;
unsigned short var_5 = (unsigned short)46598;
signed char var_8 = (signed char)-39;
unsigned int var_9 = 113955367U;
unsigned int var_10 = 286788910U;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
unsigned short var_15 = (unsigned short)3286;
unsigned int var_16 = 3040742033U;
int var_17 = -1241080063;
unsigned char var_18 = (unsigned char)192;
unsigned char var_19 = (unsigned char)118;
short arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-16343 : (short)16521;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53059 : (unsigned short)20967;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)143;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
