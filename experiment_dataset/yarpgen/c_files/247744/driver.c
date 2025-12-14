#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21878;
short var_1 = (short)-31442;
signed char var_3 = (signed char)90;
unsigned char var_5 = (unsigned char)249;
unsigned int var_7 = 3594780008U;
signed char var_10 = (signed char)73;
signed char var_11 = (signed char)-59;
unsigned char var_12 = (unsigned char)138;
unsigned int var_14 = 731096582U;
int zero = 0;
unsigned int var_17 = 400779927U;
int var_18 = -1081573612;
unsigned long long int var_19 = 10396387646164637223ULL;
unsigned int var_20 = 2561713561U;
unsigned int var_21 = 2610664571U;
long long int var_22 = 1392571311296184486LL;
unsigned short var_23 = (unsigned short)29397;
unsigned int var_24 = 633655961U;
unsigned short var_25 = (unsigned short)4127;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
long long int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)13860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18039;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4981608873628104103LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
