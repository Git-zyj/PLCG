#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37901;
signed char var_1 = (signed char)37;
unsigned char var_2 = (unsigned char)8;
unsigned short var_3 = (unsigned short)13387;
unsigned char var_5 = (unsigned char)78;
unsigned long long int var_6 = 6536213538487451657ULL;
unsigned int var_7 = 1701623839U;
short var_9 = (short)29081;
signed char var_10 = (signed char)65;
long long int var_12 = 8354356164337684960LL;
int zero = 0;
unsigned long long int var_14 = 163656764676043440ULL;
unsigned long long int var_15 = 3522184141583765002ULL;
short var_16 = (short)-877;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_18 = 13867771905535419113ULL;
unsigned int var_19 = 2430475940U;
long long int var_20 = -7175205223363397315LL;
unsigned int var_21 = 387312140U;
unsigned short var_22 = (unsigned short)18597;
long long int var_23 = -4460144312991873977LL;
unsigned short var_24 = (unsigned short)59572;
unsigned short var_25 = (unsigned short)51828;
unsigned char var_26 = (unsigned char)143;
int var_27 = 29748672;
int var_28 = 181462190;
long long int arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned char arr_4 [11] ;
unsigned char arr_6 [18] [18] ;
unsigned char arr_9 [18] [18] ;
signed char arr_14 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -5273145427118453316LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)26027;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-77;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
