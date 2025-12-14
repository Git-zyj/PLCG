#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21773;
short var_1 = (short)6762;
unsigned char var_2 = (unsigned char)151;
unsigned short var_4 = (unsigned short)29885;
unsigned char var_5 = (unsigned char)192;
unsigned short var_6 = (unsigned short)32352;
unsigned long long int var_7 = 5435020762782370784ULL;
long long int var_10 = 7486672830791796746LL;
short var_11 = (short)-27045;
short var_12 = (short)-28485;
unsigned long long int var_13 = 11470653004767632311ULL;
unsigned short var_15 = (unsigned short)47917;
short var_17 = (short)19854;
int zero = 0;
long long int var_18 = -5638502635462657027LL;
unsigned short var_19 = (unsigned short)30388;
int var_20 = 1371754027;
int var_21 = -732288590;
unsigned long long int arr_2 [18] ;
unsigned char arr_4 [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
unsigned char arr_7 [18] [18] [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] [18] ;
unsigned short arr_9 [18] ;
unsigned char arr_14 [18] [18] ;
long long int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 15629092276416942676ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12784269476055703416ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9839053137822620596ULL : 4633443970682490305ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)25908;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 7577586467350415816LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
