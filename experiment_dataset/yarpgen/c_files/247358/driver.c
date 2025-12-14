#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3447704090U;
long long int var_1 = 8198003608068130043LL;
short var_3 = (short)-26494;
int var_4 = 424002171;
long long int var_5 = 1989367024648300844LL;
unsigned short var_7 = (unsigned short)37045;
signed char var_8 = (signed char)-91;
long long int var_9 = -3901494939539132084LL;
unsigned int var_14 = 3969250593U;
int zero = 0;
unsigned short var_15 = (unsigned short)33580;
unsigned char var_16 = (unsigned char)185;
signed char var_17 = (signed char)-61;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 5019316405757528268ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
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
