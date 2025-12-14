#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6456217757012522661LL;
unsigned int var_1 = 3655456218U;
short var_2 = (short)-8361;
signed char var_3 = (signed char)7;
short var_4 = (short)12783;
signed char var_5 = (signed char)41;
unsigned int var_6 = 2956871545U;
signed char var_7 = (signed char)106;
signed char var_9 = (signed char)-52;
int zero = 0;
unsigned int var_10 = 3455851852U;
long long int var_11 = 661551303816359687LL;
long long int var_12 = -7648813339354904848LL;
unsigned int var_13 = 2669318845U;
int var_14 = -872513866;
signed char var_15 = (signed char)-90;
long long int var_16 = -7919274030578047909LL;
long long int var_17 = -2826543215153125180LL;
unsigned int var_18 = 896446644U;
signed char var_19 = (signed char)55;
signed char arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)92;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
