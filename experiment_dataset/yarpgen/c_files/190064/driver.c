#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4625457749307902844LL;
long long int var_5 = 2910050593469222750LL;
long long int var_6 = 970164162233131589LL;
short var_8 = (short)-5909;
unsigned short var_9 = (unsigned short)62164;
short var_11 = (short)22217;
unsigned short var_12 = (unsigned short)17053;
unsigned short var_13 = (unsigned short)8881;
unsigned int var_14 = 3549792305U;
int zero = 0;
unsigned short var_17 = (unsigned short)47685;
signed char var_18 = (signed char)48;
unsigned short var_19 = (unsigned short)27554;
unsigned char var_20 = (unsigned char)4;
unsigned short var_21 = (unsigned short)11712;
long long int var_22 = 4903411003091440120LL;
long long int var_23 = -4063585249261966018LL;
signed char arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned int arr_7 [10] ;
long long int arr_2 [13] [13] ;
long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)28948;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)7395;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)48182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4251848870U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -6440741864389042266LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 6943529375786865924LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
