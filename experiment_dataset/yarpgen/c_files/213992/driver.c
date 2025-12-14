#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1924413397;
unsigned char var_3 = (unsigned char)238;
unsigned long long int var_4 = 11780316427443226571ULL;
int var_6 = -809395079;
unsigned short var_10 = (unsigned short)54161;
unsigned long long int var_13 = 14807632069330187217ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)22481;
unsigned short var_15 = (unsigned short)33598;
unsigned short var_16 = (unsigned short)60620;
int arr_4 [17] [17] [17] ;
unsigned long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2136633334;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 9642103148657404818ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
