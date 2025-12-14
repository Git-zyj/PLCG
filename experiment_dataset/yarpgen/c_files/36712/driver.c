#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7932110799841875161LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = -7971953133910865042LL;
short var_6 = (short)30153;
short var_7 = (short)-607;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)7664;
short var_16 = (short)-8461;
unsigned long long int var_17 = 14957860527940285979ULL;
int zero = 0;
int var_19 = -758469088;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2328907801U;
short var_22 = (short)-2067;
unsigned long long int var_23 = 6812872427163283791ULL;
short var_24 = (short)10982;
unsigned char arr_1 [25] [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 9740904797749138929ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
