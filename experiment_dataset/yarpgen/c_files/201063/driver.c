#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17179;
unsigned int var_6 = 4027910156U;
unsigned short var_7 = (unsigned short)14182;
unsigned short var_10 = (unsigned short)40773;
int var_11 = 98737783;
int var_12 = -38480565;
unsigned short var_13 = (unsigned short)51990;
int zero = 0;
short var_17 = (short)10143;
short var_18 = (short)-1064;
int var_19 = -2132782294;
short var_20 = (short)-24372;
signed char var_21 = (signed char)109;
unsigned long long int var_22 = 13165969610189863336ULL;
unsigned short var_23 = (unsigned short)42061;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)59061;
unsigned short arr_6 [11] [11] [11] ;
signed char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)64766;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-125;
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
