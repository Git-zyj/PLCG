#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4390365704797653259LL;
signed char var_4 = (signed char)58;
unsigned short var_6 = (unsigned short)47621;
long long int var_9 = -627584859901013571LL;
unsigned short var_10 = (unsigned short)31610;
int zero = 0;
signed char var_12 = (signed char)10;
long long int var_13 = 2904169453048202799LL;
signed char var_14 = (signed char)125;
unsigned char var_15 = (unsigned char)8;
long long int var_16 = 4090583641843058871LL;
unsigned short var_17 = (unsigned short)28914;
unsigned char var_18 = (unsigned char)247;
unsigned char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
