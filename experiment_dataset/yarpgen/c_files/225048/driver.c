#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6822322833046873214LL;
unsigned char var_1 = (unsigned char)149;
short var_3 = (short)22215;
signed char var_4 = (signed char)6;
unsigned int var_5 = 2145705049U;
short var_7 = (short)-30749;
unsigned long long int var_9 = 8687755530382690305ULL;
unsigned char var_10 = (unsigned char)16;
unsigned long long int var_11 = 3021408964037467681ULL;
int zero = 0;
long long int var_12 = 4776719002582085831LL;
short var_13 = (short)9630;
unsigned short var_14 = (unsigned short)22306;
long long int var_15 = -428857659771568160LL;
signed char var_16 = (signed char)-86;
unsigned short var_17 = (unsigned short)41544;
signed char arr_0 [24] [24] ;
signed char arr_2 [24] ;
unsigned short arr_3 [24] ;
int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)61588;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 473738823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3518423560029773744ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
