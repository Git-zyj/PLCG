#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 242987200U;
short var_1 = (short)-28091;
unsigned int var_2 = 238545640U;
unsigned char var_3 = (unsigned char)4;
unsigned int var_4 = 3420191911U;
unsigned char var_5 = (unsigned char)110;
unsigned char var_6 = (unsigned char)90;
short var_8 = (short)-2057;
unsigned int var_9 = 270481536U;
unsigned int var_10 = 1458155968U;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
short var_15 = (short)-26294;
unsigned char var_16 = (unsigned char)44;
unsigned int var_17 = 2286044226U;
short var_18 = (short)-7707;
unsigned int var_19 = 2725596542U;
unsigned char var_20 = (unsigned char)57;
unsigned char var_21 = (unsigned char)244;
unsigned char var_22 = (unsigned char)225;
short arr_3 [15] ;
unsigned char arr_6 [15] [15] ;
unsigned char arr_8 [15] [15] ;
short arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-26055;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-32079;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
