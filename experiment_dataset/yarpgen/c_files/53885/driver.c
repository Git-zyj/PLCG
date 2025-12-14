#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1698902963;
unsigned int var_2 = 1572416858U;
long long int var_3 = -3497714021707204047LL;
unsigned short var_5 = (unsigned short)40470;
short var_6 = (short)-30017;
unsigned short var_8 = (unsigned short)31308;
short var_10 = (short)21657;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3249341179U;
signed char var_13 = (signed char)-17;
unsigned int var_14 = 3177602457U;
int zero = 0;
int var_15 = 1942654297;
int var_16 = -1339104406;
_Bool var_17 = (_Bool)1;
int var_18 = -686037071;
signed char var_19 = (signed char)-79;
unsigned long long int var_20 = 14918847157671959652ULL;
unsigned short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned char arr_3 [14] [14] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)60472;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11105209324386786318ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 364271256;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
