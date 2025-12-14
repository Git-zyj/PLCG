#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned short var_3 = (unsigned short)52920;
unsigned short var_4 = (unsigned short)31329;
unsigned long long int var_5 = 8096891977808767568ULL;
short var_6 = (short)30251;
long long int var_7 = -4121204221322880475LL;
signed char var_8 = (signed char)-94;
unsigned short var_9 = (unsigned short)30908;
signed char var_10 = (signed char)-79;
unsigned char var_11 = (unsigned char)120;
signed char var_12 = (signed char)(-127 - 1);
short var_14 = (short)-10884;
unsigned int var_15 = 3101070241U;
int zero = 0;
long long int var_18 = -6071822435340963835LL;
unsigned short var_19 = (unsigned short)63320;
unsigned char var_20 = (unsigned char)133;
unsigned char var_21 = (unsigned char)78;
short var_22 = (short)27598;
unsigned char var_23 = (unsigned char)167;
unsigned short var_24 = (unsigned short)40407;
short var_25 = (short)19766;
short var_26 = (short)-29635;
long long int var_27 = 7272711023717820950LL;
signed char var_28 = (signed char)-51;
unsigned long long int var_29 = 4981043018811392328ULL;
unsigned char arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned long long int arr_2 [20] ;
unsigned short arr_3 [20] [20] ;
short arr_7 [20] [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11680014063653474023ULL : 5518140959777821134ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)32038 : (unsigned short)219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)16495;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 9169997835015344880ULL : 9167871139716136247ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16180874514567386977ULL : 2559689983234671144ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
