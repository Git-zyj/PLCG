#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-26;
signed char var_4 = (signed char)-119;
signed char var_5 = (signed char)-43;
unsigned int var_7 = 3017607058U;
unsigned int var_8 = 3268779291U;
unsigned int var_10 = 2245497424U;
unsigned int var_12 = 3232425863U;
signed char var_14 = (signed char)110;
unsigned int var_15 = 1067743006U;
int zero = 0;
signed char var_16 = (signed char)-41;
unsigned int var_17 = 1659249454U;
unsigned int var_18 = 2755359648U;
unsigned int var_19 = 1329718659U;
unsigned int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1255105318U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
