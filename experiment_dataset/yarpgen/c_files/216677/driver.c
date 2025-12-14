#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
short var_3 = (short)20269;
short var_4 = (short)-11802;
short var_6 = (short)19017;
signed char var_7 = (signed char)-62;
short var_9 = (short)4897;
unsigned char var_10 = (unsigned char)36;
short var_14 = (short)27412;
int zero = 0;
unsigned short var_15 = (unsigned short)12166;
short var_16 = (short)-21723;
short var_17 = (short)-14236;
signed char var_18 = (signed char)-46;
unsigned long long int var_19 = 327608412377712743ULL;
unsigned char var_20 = (unsigned char)220;
short arr_0 [13] ;
unsigned char arr_2 [13] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-25009;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)20598;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
