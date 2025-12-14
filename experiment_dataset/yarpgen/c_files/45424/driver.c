#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8197370684839212714LL;
unsigned int var_2 = 4241834144U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)7526;
short var_6 = (short)-10942;
unsigned char var_12 = (unsigned char)16;
long long int var_14 = -859971844299457179LL;
int zero = 0;
short var_18 = (short)-12283;
unsigned long long int var_19 = 14715360312218875076ULL;
unsigned short var_20 = (unsigned short)29598;
signed char var_21 = (signed char)-42;
short var_22 = (short)16256;
unsigned char var_23 = (unsigned char)17;
unsigned short arr_0 [11] ;
unsigned char arr_3 [11] [11] ;
unsigned short arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)17953;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)47460;
}

void checksum() {
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
