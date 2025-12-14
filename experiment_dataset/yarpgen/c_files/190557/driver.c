#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26914;
short var_3 = (short)13452;
unsigned int var_4 = 2342083204U;
unsigned int var_5 = 4128568575U;
int var_7 = -495228242;
unsigned int var_8 = 2397702109U;
unsigned int var_9 = 3923166396U;
unsigned char var_10 = (unsigned char)241;
unsigned int var_11 = 2244344053U;
long long int var_12 = -4936173878455318287LL;
signed char var_13 = (signed char)-98;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3766226809222568466LL;
unsigned short var_16 = (unsigned short)62183;
int zero = 0;
unsigned long long int var_17 = 7189531538623000417ULL;
unsigned int var_18 = 2005669676U;
int arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 536051639 : -791852649;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
