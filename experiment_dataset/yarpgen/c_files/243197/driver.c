#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1078643675395673757LL;
signed char var_1 = (signed char)-56;
signed char var_2 = (signed char)96;
short var_3 = (short)-17577;
short var_4 = (short)-14990;
int var_5 = -1168651191;
unsigned int var_6 = 2964326492U;
signed char var_7 = (signed char)-58;
unsigned int var_8 = 4248181312U;
unsigned int var_10 = 852720403U;
int zero = 0;
signed char var_11 = (signed char)-49;
unsigned int var_12 = 103590281U;
signed char var_13 = (signed char)66;
long long int var_14 = 3364327325380566647LL;
unsigned int var_15 = 3045358854U;
unsigned int var_16 = 962691218U;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_3 [17] [17] ;
signed char arr_4 [17] [17] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1728088518;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-2674;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
