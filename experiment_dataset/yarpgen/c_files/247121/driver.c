#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9338055257772835452ULL;
unsigned long long int var_2 = 6082738806783447238ULL;
int var_3 = -880951610;
unsigned char var_4 = (unsigned char)172;
int var_5 = 484309708;
unsigned long long int var_6 = 951682587200026983ULL;
unsigned short var_8 = (unsigned short)55385;
short var_9 = (short)2178;
short var_10 = (short)18201;
unsigned int var_11 = 4268778179U;
unsigned char var_13 = (unsigned char)194;
int zero = 0;
short var_15 = (short)-19978;
unsigned char var_16 = (unsigned char)160;
short var_17 = (short)-23268;
unsigned char var_18 = (unsigned char)181;
unsigned long long int var_19 = 12804642826543647100ULL;
unsigned short var_20 = (unsigned short)9773;
unsigned long long int var_21 = 11035629598773078521ULL;
unsigned char var_22 = (unsigned char)108;
unsigned short var_23 = (unsigned short)8622;
int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1814991111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)29899;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 8850718775401208620ULL;
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
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
