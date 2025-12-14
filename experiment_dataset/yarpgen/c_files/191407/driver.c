#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned char var_2 = (unsigned char)114;
signed char var_3 = (signed char)14;
unsigned int var_6 = 1514012782U;
long long int var_10 = 9067748574377218600LL;
unsigned char var_11 = (unsigned char)219;
signed char var_12 = (signed char)117;
signed char var_13 = (signed char)96;
int zero = 0;
unsigned int var_19 = 3268396409U;
short var_20 = (short)22966;
unsigned int var_21 = 3222754474U;
signed char var_22 = (signed char)-101;
unsigned int var_23 = 3120514514U;
_Bool arr_1 [24] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-29685;
}

void checksum() {
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
