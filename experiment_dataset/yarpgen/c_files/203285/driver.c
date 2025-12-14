#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16363374546359112345ULL;
unsigned char var_1 = (unsigned char)199;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)32;
unsigned char var_13 = (unsigned char)25;
short var_14 = (short)-30376;
int zero = 0;
unsigned int var_15 = 1680599416U;
unsigned short var_16 = (unsigned short)46392;
unsigned char var_17 = (unsigned char)115;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)25936;
signed char arr_1 [18] [18] ;
int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -1497851063;
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
