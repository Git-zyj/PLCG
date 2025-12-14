#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
signed char var_4 = (signed char)-64;
int zero = 0;
unsigned short var_18 = (unsigned short)61880;
unsigned short var_19 = (unsigned short)49390;
int var_20 = 830211499;
unsigned short var_21 = (unsigned short)39062;
short var_22 = (short)-26687;
unsigned char var_23 = (unsigned char)60;
int var_24 = -1570954635;
short var_25 = (short)26067;
int var_26 = 1154319518;
_Bool var_27 = (_Bool)1;
unsigned short arr_1 [17] ;
unsigned long long int arr_2 [17] ;
short arr_6 [25] ;
signed char arr_7 [25] [25] ;
int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)35656;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 9578228135414458497ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)3124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 465013157;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
