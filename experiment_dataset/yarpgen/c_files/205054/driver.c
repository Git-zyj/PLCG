#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
signed char var_1 = (signed char)-11;
int var_2 = -1518790778;
unsigned short var_3 = (unsigned short)59325;
unsigned long long int var_4 = 1968760297705631365ULL;
short var_5 = (short)14664;
signed char var_6 = (signed char)54;
unsigned int var_7 = 1091127993U;
unsigned int var_8 = 394050432U;
unsigned short var_9 = (unsigned short)65523;
int zero = 0;
short var_10 = (short)29958;
unsigned long long int var_11 = 4767357097181162153ULL;
short var_12 = (short)26459;
unsigned char arr_0 [24] [24] ;
unsigned char arr_1 [24] [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
