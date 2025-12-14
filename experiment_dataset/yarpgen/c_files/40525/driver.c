#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)90;
long long int var_6 = -9170672027076640977LL;
signed char var_7 = (signed char)104;
unsigned short var_8 = (unsigned short)22624;
unsigned int var_10 = 3342046711U;
signed char var_11 = (signed char)-58;
unsigned short var_15 = (unsigned short)22650;
long long int var_16 = -4876438620074456560LL;
unsigned short var_18 = (unsigned short)55047;
short var_19 = (short)-19548;
int zero = 0;
long long int var_20 = 1160566979772441577LL;
unsigned long long int var_21 = 7339840843545074484ULL;
short var_22 = (short)-6473;
unsigned short var_23 = (unsigned short)51130;
short var_24 = (short)-12355;
int var_25 = -256268970;
unsigned long long int arr_3 [13] [13] [13] ;
int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9296608906548354539ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 461666122 : -433890670;
}

void checksum() {
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
