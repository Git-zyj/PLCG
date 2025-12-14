#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50068;
unsigned long long int var_4 = 9434190662557543614ULL;
unsigned long long int var_5 = 11767733234034511712ULL;
unsigned long long int var_10 = 2798762821542643439ULL;
short var_13 = (short)31293;
unsigned short var_15 = (unsigned short)21886;
unsigned char var_17 = (unsigned char)45;
int zero = 0;
short var_19 = (short)-20173;
long long int var_20 = 6341161713092738178LL;
unsigned char var_21 = (unsigned char)39;
unsigned char var_22 = (unsigned char)75;
unsigned long long int var_23 = 17116464503575498577ULL;
short var_24 = (short)-6422;
signed char var_25 = (signed char)-52;
unsigned char var_26 = (unsigned char)152;
long long int var_27 = -7046045603263713050LL;
unsigned short var_28 = (unsigned short)61;
_Bool arr_0 [12] ;
short arr_3 [12] [12] ;
int arr_6 [12] ;
unsigned char arr_7 [12] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9824;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1261947523;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-14470;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
