#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1544996555;
unsigned char var_4 = (unsigned char)252;
unsigned char var_5 = (unsigned char)223;
unsigned short var_6 = (unsigned short)8242;
unsigned int var_11 = 1121454246U;
unsigned short var_16 = (unsigned short)34047;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
unsigned short var_18 = (unsigned short)49054;
unsigned char var_19 = (unsigned char)184;
unsigned char var_20 = (unsigned char)199;
unsigned short var_21 = (unsigned short)38376;
unsigned short arr_0 [18] ;
long long int arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)38627;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1028712350268270654LL : -5661191255399450708LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62047 : (unsigned short)44296;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
