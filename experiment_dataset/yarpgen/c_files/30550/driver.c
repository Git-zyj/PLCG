#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7025137394573401241ULL;
long long int var_1 = -4757321715706216515LL;
signed char var_4 = (signed char)20;
unsigned short var_5 = (unsigned short)54680;
unsigned char var_7 = (unsigned char)78;
signed char var_8 = (signed char)29;
unsigned short var_12 = (unsigned short)30566;
unsigned char var_13 = (unsigned char)59;
int zero = 0;
unsigned long long int var_15 = 18358998363518232120ULL;
signed char var_16 = (signed char)115;
long long int var_17 = 2337369806710010156LL;
unsigned short var_18 = (unsigned short)28624;
long long int var_19 = 341303055970663552LL;
signed char var_20 = (signed char)-124;
int var_21 = -83726195;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)48452;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)15373;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
