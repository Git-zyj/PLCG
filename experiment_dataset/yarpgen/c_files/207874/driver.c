#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)88;
short var_6 = (short)-5708;
unsigned long long int var_7 = 9187600119338233698ULL;
unsigned long long int var_8 = 6609989752486642191ULL;
unsigned char var_9 = (unsigned char)162;
unsigned long long int var_11 = 5527033989092789479ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-30641;
long long int var_15 = 9009336300924378444LL;
int zero = 0;
long long int var_16 = -5832487697142610543LL;
unsigned char var_17 = (unsigned char)146;
unsigned long long int var_18 = 16440597260980795158ULL;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_2 [23] ;
signed char arr_3 [23] [23] [23] ;
long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-28286;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 351261374803213968LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
