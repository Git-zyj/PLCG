#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2879889040137203553ULL;
unsigned int var_2 = 2800098939U;
short var_3 = (short)16716;
unsigned long long int var_5 = 5682163706918714675ULL;
int var_9 = 860589886;
int zero = 0;
short var_15 = (short)-19528;
unsigned char var_16 = (unsigned char)221;
unsigned long long int var_17 = 15861839073211923655ULL;
int var_18 = -1649981218;
unsigned int var_19 = 2486090349U;
signed char arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
