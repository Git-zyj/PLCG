#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4928374071473932914ULL;
int var_2 = -2067813342;
signed char var_3 = (signed char)57;
int var_5 = 87554191;
signed char var_9 = (signed char)94;
long long int var_10 = -1311611609847135328LL;
_Bool var_11 = (_Bool)0;
int var_12 = -94932532;
short var_15 = (short)18336;
int var_18 = 2102962464;
int zero = 0;
unsigned long long int var_19 = 15383564455968783447ULL;
short var_20 = (short)-1009;
unsigned long long int var_21 = 7034864008105227973ULL;
short var_22 = (short)25083;
signed char var_23 = (signed char)89;
unsigned char arr_3 [25] [25] [25] ;
signed char arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-114 : (signed char)15;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
