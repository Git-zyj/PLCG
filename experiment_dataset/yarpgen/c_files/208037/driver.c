#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 17997883630799595613ULL;
signed char var_3 = (signed char)32;
unsigned long long int var_4 = 12809373592453955116ULL;
unsigned int var_5 = 3818167709U;
int var_6 = -179052659;
long long int var_7 = 6128674867984202121LL;
signed char var_10 = (signed char)18;
unsigned short var_11 = (unsigned short)26814;
unsigned int var_12 = 3916212527U;
int zero = 0;
unsigned short var_13 = (unsigned short)19263;
unsigned int var_14 = 1490694580U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 171103306;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
