#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15413897491282104698ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 10945440417125856819ULL;
long long int var_7 = 1893494867910545759LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 524222865;
unsigned short var_13 = (unsigned short)54613;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)38303;
unsigned int var_16 = 1562536302U;
long long int var_17 = 2440885921951327157LL;
unsigned short arr_0 [12] ;
unsigned long long int arr_2 [12] ;
unsigned char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)57591;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 5001651908368127393ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)103;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
