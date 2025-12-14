#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3807468577819590143LL;
unsigned long long int var_6 = 5291159749255696730ULL;
long long int var_8 = 9097452227131653157LL;
unsigned char var_9 = (unsigned char)190;
int var_10 = 380205598;
int var_11 = 856605176;
int var_12 = 1650869205;
long long int var_14 = -7533826010486080997LL;
long long int var_15 = -7902988460951865398LL;
int zero = 0;
unsigned long long int var_17 = 4044746631732158718ULL;
signed char var_18 = (signed char)58;
unsigned int var_19 = 3163631850U;
int var_20 = -1141907769;
int var_21 = 613150766;
unsigned short var_22 = (unsigned short)12295;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)41065 : (unsigned short)10678;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
