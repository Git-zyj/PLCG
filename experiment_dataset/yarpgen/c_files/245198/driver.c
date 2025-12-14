#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
signed char var_1 = (signed char)106;
long long int var_2 = 2212758662889570738LL;
signed char var_3 = (signed char)111;
short var_4 = (short)7536;
signed char var_5 = (signed char)104;
unsigned short var_6 = (unsigned short)26471;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15705439075932953741ULL;
int var_9 = -1684906222;
unsigned short var_10 = (unsigned short)13730;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)26;
signed char var_13 = (signed char)-126;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
int var_15 = 1032958894;
unsigned short var_16 = (unsigned short)33554;
int var_17 = -1769122361;
signed char var_18 = (signed char)-10;
signed char var_19 = (signed char)-54;
signed char var_20 = (signed char)-18;
signed char var_21 = (signed char)48;
signed char var_22 = (signed char)105;
unsigned long long int var_23 = 15816039269467673354ULL;
signed char var_24 = (signed char)27;
int var_25 = 622188358;
unsigned short arr_0 [13] [13] ;
signed char arr_1 [13] [13] ;
unsigned short arr_3 [13] ;
int arr_4 [13] [13] ;
unsigned short arr_5 [13] [13] ;
_Bool arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)42189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -535773126 : 1439413629;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)58432;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
