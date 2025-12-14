#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-15293;
unsigned long long int var_11 = 8667063400431552031ULL;
short var_12 = (short)8045;
int var_15 = 255683568;
int zero = 0;
unsigned char var_18 = (unsigned char)80;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_7 [12] ;
short arr_8 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 15973137796120751903ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)26777 : (short)-17740;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
