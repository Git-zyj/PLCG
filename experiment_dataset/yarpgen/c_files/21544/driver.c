#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2357079281U;
unsigned short var_7 = (unsigned short)48673;
signed char var_9 = (signed char)12;
int zero = 0;
int var_13 = 1387236081;
unsigned short var_14 = (unsigned short)17567;
unsigned char var_15 = (unsigned char)209;
short var_16 = (short)8282;
unsigned char var_17 = (unsigned char)201;
short var_18 = (short)766;
int var_19 = 572887496;
signed char var_20 = (signed char)-91;
unsigned long long int var_21 = 1497415359473371430ULL;
int var_22 = 14703925;
long long int var_23 = 3709846412751413655LL;
long long int arr_3 [13] ;
int arr_6 [13] [13] [13] ;
unsigned int arr_11 [17] [17] ;
int arr_15 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -6438734590503756772LL : 5969939541714952550LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1700526287;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 2728064575U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1522326502 : 203078677;
}

void checksum() {
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
