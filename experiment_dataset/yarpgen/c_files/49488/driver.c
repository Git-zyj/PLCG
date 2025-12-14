#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned char var_2 = (unsigned char)43;
unsigned char var_3 = (unsigned char)228;
unsigned long long int var_5 = 3994851839755189418ULL;
short var_6 = (short)-11607;
unsigned char var_8 = (unsigned char)94;
signed char var_9 = (signed char)94;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
long long int var_11 = -2503241209055923702LL;
unsigned int var_12 = 3887786480U;
long long int var_13 = 7382259039219100615LL;
long long int var_14 = -1384748197834972321LL;
unsigned long long int var_15 = 2095846135893819199ULL;
long long int var_16 = -5412052811258387305LL;
short var_17 = (short)31630;
short var_18 = (short)23023;
short arr_0 [24] [24] ;
short arr_1 [24] ;
long long int arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_12 [24] [24] [24] [24] [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)17855;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-7539;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -2677613754708177268LL : -7770764877283994938LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8524396213875970233ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 173871404729762133ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)-53;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
