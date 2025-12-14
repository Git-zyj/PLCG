#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8087071272080776896LL;
unsigned char var_2 = (unsigned char)179;
short var_8 = (short)6972;
int zero = 0;
unsigned char var_11 = (unsigned char)187;
long long int var_12 = -3546123755912685789LL;
unsigned short var_13 = (unsigned short)31589;
int var_14 = 686299780;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)55202;
unsigned short var_17 = (unsigned short)4590;
unsigned short var_18 = (unsigned short)61919;
unsigned char var_19 = (unsigned char)96;
short arr_0 [17] ;
unsigned int arr_1 [17] ;
long long int arr_3 [12] ;
unsigned char arr_4 [12] ;
unsigned int arr_8 [12] [12] [12] ;
unsigned short arr_10 [12] ;
long long int arr_2 [17] ;
unsigned short arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-29783;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2413541107U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 7643647056592529147LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 994265866U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)27763;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 273196553151018674LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)14532 : (unsigned short)64310;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
