#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3954;
short var_1 = (short)-21965;
unsigned long long int var_2 = 16203255542920139105ULL;
signed char var_3 = (signed char)-88;
short var_4 = (short)-32158;
signed char var_6 = (signed char)20;
signed char var_7 = (signed char)-126;
signed char var_8 = (signed char)88;
unsigned char var_9 = (unsigned char)143;
short var_10 = (short)-2976;
unsigned long long int var_11 = 2270919994786367308ULL;
signed char var_12 = (signed char)-33;
unsigned int var_13 = 879266922U;
signed char var_15 = (signed char)-85;
signed char var_17 = (signed char)-125;
int zero = 0;
unsigned long long int var_18 = 4939833077839797817ULL;
unsigned long long int var_19 = 13675484441931650488ULL;
signed char var_20 = (signed char)0;
signed char var_21 = (signed char)48;
signed char var_22 = (signed char)108;
unsigned char var_23 = (unsigned char)225;
long long int var_24 = -8926066562597081154LL;
unsigned char var_25 = (unsigned char)228;
short arr_4 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
short arr_8 [20] [20] ;
_Bool arr_10 [20] [20] ;
unsigned long long int arr_6 [17] [17] [17] ;
unsigned char arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-9205 : (short)-8399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 8365084729374091647ULL : 16989354335632014127ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-15030;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14067681713280746074ULL : 13070861274736142143ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)207 : (unsigned char)105;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
