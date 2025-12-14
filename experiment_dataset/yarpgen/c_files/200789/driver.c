#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -742773621;
unsigned long long int var_1 = 16111469197280022592ULL;
unsigned int var_3 = 3625432046U;
short var_5 = (short)26825;
signed char var_6 = (signed char)-89;
short var_7 = (short)18044;
unsigned short var_8 = (unsigned short)28797;
short var_9 = (short)-23892;
unsigned long long int var_10 = 13979930094344483622ULL;
int var_12 = 473758010;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-42;
unsigned char var_15 = (unsigned char)94;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)26;
long long int var_18 = -2016184386159822649LL;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38754 : (unsigned short)40011;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
