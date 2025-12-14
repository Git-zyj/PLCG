#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1390101984;
int var_7 = -561306181;
unsigned short var_12 = (unsigned short)41041;
int var_14 = 252512714;
int var_16 = 1133562258;
int var_18 = -1519807617;
int zero = 0;
unsigned short var_19 = (unsigned short)11643;
unsigned short var_20 = (unsigned short)28365;
unsigned short var_21 = (unsigned short)1528;
unsigned short var_22 = (unsigned short)32836;
int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1713815330 : 40279784;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
