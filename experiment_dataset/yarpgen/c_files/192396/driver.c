#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26711;
signed char var_6 = (signed char)60;
unsigned int var_7 = 2941875946U;
short var_11 = (short)-25443;
int zero = 0;
signed char var_13 = (signed char)55;
long long int var_14 = 3920255939960978279LL;
signed char var_15 = (signed char)-38;
signed char var_16 = (signed char)-120;
long long int var_17 = 7685889992886572414LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-108;
unsigned char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)215 : (unsigned char)227;
}

void checksum() {
    hash(&seed, var_13);
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
