#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44340;
signed char var_3 = (signed char)-9;
int var_4 = 1235328084;
unsigned long long int var_5 = 14521342604801976361ULL;
unsigned long long int var_6 = 8868982877200476639ULL;
signed char var_8 = (signed char)-104;
int var_10 = 85826029;
short var_11 = (short)-11749;
unsigned char var_13 = (unsigned char)205;
unsigned char var_14 = (unsigned char)162;
unsigned long long int var_15 = 11881313089545485858ULL;
unsigned int var_16 = 1347564491U;
int zero = 0;
unsigned int var_18 = 2959580648U;
unsigned char var_19 = (unsigned char)68;
unsigned int var_20 = 741997428U;
unsigned int var_21 = 577784821U;
signed char var_22 = (signed char)-10;
int var_23 = -670786983;
unsigned short arr_0 [14] ;
unsigned char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)27396;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)59;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
