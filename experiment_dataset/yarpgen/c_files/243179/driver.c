#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1711208703U;
unsigned long long int var_3 = 8142555047969264494ULL;
short var_4 = (short)19782;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)43;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)6310;
signed char var_14 = (signed char)-124;
signed char var_16 = (signed char)47;
signed char var_17 = (signed char)-26;
signed char var_18 = (signed char)-52;
unsigned long long int var_19 = 7594787729780055352ULL;
int zero = 0;
short var_20 = (short)10685;
signed char var_21 = (signed char)-36;
unsigned short var_22 = (unsigned short)19208;
unsigned short var_23 = (unsigned short)32028;
unsigned char var_24 = (unsigned char)143;
short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)32006 : (short)-15806;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2183506022U;
}

void checksum() {
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
