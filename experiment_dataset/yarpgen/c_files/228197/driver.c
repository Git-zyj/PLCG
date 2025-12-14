#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8135146890999641743ULL;
short var_2 = (short)-6598;
long long int var_3 = 9009419823365751697LL;
short var_5 = (short)-27288;
unsigned int var_10 = 625393520U;
unsigned int var_11 = 491237880U;
unsigned int var_13 = 2633103892U;
short var_14 = (short)-25051;
long long int var_15 = -3528881114576377283LL;
short var_16 = (short)-28337;
int zero = 0;
unsigned long long int var_17 = 5078374080963722548ULL;
long long int var_18 = -5741919803860417322LL;
unsigned int var_19 = 4241540948U;
short arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23299 : (short)-3939;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
