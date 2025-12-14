#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
signed char var_4 = (signed char)-118;
signed char var_7 = (signed char)-84;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)120;
int var_12 = -774001410;
unsigned char var_16 = (unsigned char)213;
int zero = 0;
short var_19 = (short)-3171;
unsigned long long int var_20 = 8577900128651687585ULL;
signed char var_21 = (signed char)75;
unsigned long long int var_22 = 8384780698337773678ULL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-20;
unsigned char arr_2 [23] ;
unsigned short arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)44631 : (unsigned short)22525;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
