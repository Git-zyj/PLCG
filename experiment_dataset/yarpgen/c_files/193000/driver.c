#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2234785253U;
unsigned int var_1 = 4069639693U;
unsigned int var_2 = 2967880707U;
unsigned char var_3 = (unsigned char)115;
unsigned char var_5 = (unsigned char)241;
unsigned short var_8 = (unsigned short)12160;
unsigned short var_9 = (unsigned short)9733;
unsigned short var_10 = (unsigned short)8365;
unsigned short var_11 = (unsigned short)28886;
unsigned char var_12 = (unsigned char)132;
unsigned short var_16 = (unsigned short)56431;
int zero = 0;
short var_17 = (short)-5471;
short var_18 = (short)16643;
unsigned int var_19 = 2788932079U;
unsigned int var_20 = 3799297563U;
unsigned short var_21 = (unsigned short)51628;
unsigned char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
unsigned int arr_2 [17] ;
signed char arr_3 [17] [17] [17] ;
unsigned short arr_4 [17] [17] [17] ;
signed char arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2097477840U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)95 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)61825 : (unsigned short)34181;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)-116;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
