#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 317914350;
unsigned char var_3 = (unsigned char)128;
int var_6 = 907426052;
unsigned int var_9 = 3832283444U;
signed char var_13 = (signed char)-51;
short var_15 = (short)-20680;
int var_16 = 182619365;
int zero = 0;
short var_18 = (short)3785;
int var_19 = -829618309;
int var_20 = 1217939953;
int var_21 = 202501903;
signed char var_22 = (signed char)-66;
int var_23 = 101536287;
int var_24 = -168472460;
unsigned int arr_0 [17] ;
int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 355093979U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1259448440;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
