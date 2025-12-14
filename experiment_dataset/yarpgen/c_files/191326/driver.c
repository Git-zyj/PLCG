#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-40;
short var_5 = (short)-3094;
unsigned long long int var_6 = 3450806519701583258ULL;
short var_9 = (short)18296;
signed char var_10 = (signed char)109;
unsigned long long int var_11 = 15521298929030217689ULL;
long long int var_12 = 8154405453819170631LL;
unsigned long long int var_13 = 3575559768577806694ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)34134;
_Bool var_15 = (_Bool)0;
int var_16 = 1214684600;
unsigned short var_17 = (unsigned short)44786;
unsigned char arr_7 [20] ;
unsigned short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)61259;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
