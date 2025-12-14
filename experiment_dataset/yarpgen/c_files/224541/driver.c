#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
long long int var_1 = 1390613107463551283LL;
short var_2 = (short)-31711;
int var_4 = 1030887739;
unsigned char var_6 = (unsigned char)76;
unsigned short var_8 = (unsigned short)45315;
unsigned int var_10 = 1365009083U;
unsigned long long int var_11 = 5782015916095525062ULL;
unsigned short var_13 = (unsigned short)59078;
short var_16 = (short)-19793;
signed char var_17 = (signed char)50;
unsigned long long int var_18 = 8660236301611500398ULL;
int zero = 0;
long long int var_19 = -2670737051580377614LL;
int var_20 = -1750201846;
unsigned long long int var_21 = 2986968303340210144ULL;
short var_22 = (short)-1942;
unsigned char var_23 = (unsigned char)216;
unsigned short var_24 = (unsigned short)20994;
unsigned char var_25 = (unsigned char)162;
unsigned short var_26 = (unsigned short)27227;
unsigned long long int var_27 = 967126763801666939ULL;
unsigned long long int arr_1 [10] ;
long long int arr_2 [10] ;
short arr_3 [10] ;
unsigned long long int arr_6 [10] [10] ;
unsigned short arr_12 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 7453007349701269059ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1738667155254687914LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)28904;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 11725110648577602201ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)58701 : (unsigned short)7529;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
