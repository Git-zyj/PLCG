#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44153;
signed char var_1 = (signed char)-12;
unsigned char var_2 = (unsigned char)31;
long long int var_3 = 177488458276663652LL;
long long int var_4 = -9174848601282158908LL;
short var_5 = (short)4750;
unsigned short var_6 = (unsigned short)13688;
unsigned char var_7 = (unsigned char)147;
signed char var_9 = (signed char)120;
int zero = 0;
signed char var_10 = (signed char)-60;
int var_11 = 590016553;
int var_12 = -387428045;
int var_13 = 1932270832;
int var_14 = 1146634324;
short var_15 = (short)-21363;
unsigned char var_16 = (unsigned char)38;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned char arr_3 [25] [25] ;
short arr_4 [25] ;
signed char arr_5 [25] ;
signed char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)14626;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 9232473607987534295ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-3195;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
