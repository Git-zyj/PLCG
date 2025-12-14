#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6626421937142355271LL;
long long int var_3 = -4825576218010700225LL;
short var_5 = (short)-31901;
unsigned long long int var_7 = 15994957091426296378ULL;
short var_11 = (short)71;
int zero = 0;
short var_12 = (short)29943;
signed char var_13 = (signed char)-7;
signed char var_14 = (signed char)121;
unsigned long long int var_15 = 18102186467585073680ULL;
short var_16 = (short)-23890;
short var_17 = (short)11521;
short arr_0 [24] ;
signed char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-11674;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
