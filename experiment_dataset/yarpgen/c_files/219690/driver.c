#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 748156384;
int var_1 = -842350990;
unsigned char var_5 = (unsigned char)26;
unsigned char var_6 = (unsigned char)194;
int var_7 = -1935431778;
int var_8 = -1285666682;
int var_9 = 2034687655;
int var_11 = 1222396901;
int var_12 = -1937208220;
int var_15 = 1822069643;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
int var_18 = 219690863;
unsigned char var_19 = (unsigned char)39;
unsigned char var_20 = (unsigned char)48;
int var_21 = 355458237;
unsigned char var_22 = (unsigned char)145;
unsigned char var_23 = (unsigned char)166;
int arr_0 [23] [23] ;
int arr_3 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_6 [23] ;
int arr_7 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 2145900092;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -1900572587;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1810053144;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
