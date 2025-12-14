#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1125746659;
short var_1 = (short)15456;
unsigned char var_2 = (unsigned char)131;
unsigned char var_4 = (unsigned char)55;
short var_5 = (short)-26647;
int var_7 = -361933741;
int var_8 = -1162382930;
unsigned char var_9 = (unsigned char)81;
unsigned char var_10 = (unsigned char)55;
int zero = 0;
int var_13 = 907080103;
unsigned char var_14 = (unsigned char)117;
int var_15 = 1887081009;
int var_16 = -215840940;
unsigned char var_17 = (unsigned char)61;
unsigned char var_18 = (unsigned char)30;
int arr_0 [24] [24] ;
short arr_1 [24] ;
unsigned char arr_2 [24] ;
unsigned char arr_3 [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1103388239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-2948;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)6338 : (short)31562;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
