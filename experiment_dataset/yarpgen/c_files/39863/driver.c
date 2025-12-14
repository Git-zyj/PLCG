#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3676652446U;
signed char var_3 = (signed char)-53;
int var_6 = -340463053;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14032763537161448104ULL;
long long int var_12 = 1023169010204586761LL;
int var_14 = -175714489;
unsigned short var_16 = (unsigned short)12497;
unsigned long long int var_17 = 9140364532529009182ULL;
int zero = 0;
unsigned long long int var_19 = 5558753465457190227ULL;
unsigned short var_20 = (unsigned short)12630;
unsigned long long int var_21 = 666205900235251697ULL;
unsigned int var_22 = 2604841647U;
unsigned int var_23 = 3994632150U;
unsigned long long int var_24 = 10386397083579594028ULL;
unsigned char var_25 = (unsigned char)125;
unsigned long long int arr_0 [13] ;
unsigned short arr_2 [11] ;
unsigned short arr_4 [11] ;
unsigned char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 5765318366926252880ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)17888;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)33854;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)190;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
