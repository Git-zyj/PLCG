#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1235338318;
unsigned int var_5 = 2284734698U;
unsigned short var_7 = (unsigned short)31524;
unsigned char var_8 = (unsigned char)113;
signed char var_10 = (signed char)-123;
unsigned short var_11 = (unsigned short)47172;
int zero = 0;
int var_12 = 1037061998;
int var_13 = -932142445;
short var_14 = (short)-30636;
unsigned short var_15 = (unsigned short)7085;
int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1436377333;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
