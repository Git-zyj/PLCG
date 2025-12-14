#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
int var_6 = -726200058;
short var_7 = (short)-21158;
int var_10 = -1321175182;
int var_11 = 1879692138;
int var_12 = 595863021;
int var_14 = -81252910;
int var_15 = -1861611340;
int zero = 0;
unsigned int var_17 = 2284813333U;
short var_18 = (short)-6891;
int var_19 = -677512505;
signed char var_20 = (signed char)-24;
int var_21 = -735538884;
signed char var_22 = (signed char)18;
unsigned int var_23 = 3231336760U;
short arr_3 [12] [12] [12] ;
signed char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-6932 : (short)-8037;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-80;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
