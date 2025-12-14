#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned long long int var_2 = 9740001499604593997ULL;
signed char var_5 = (signed char)-56;
unsigned char var_9 = (unsigned char)181;
short var_12 = (short)4080;
int zero = 0;
short var_13 = (short)-28515;
signed char var_14 = (signed char)107;
unsigned char var_15 = (unsigned char)51;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-57;
signed char var_18 = (signed char)103;
unsigned long long int var_19 = 12982968358349596961ULL;
short var_20 = (short)26623;
unsigned char arr_4 [13] [13] ;
unsigned short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)42665;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
