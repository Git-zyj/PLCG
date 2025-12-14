#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -533989849;
short var_4 = (short)-610;
short var_6 = (short)589;
unsigned long long int var_9 = 5456881430743240163ULL;
int var_10 = 1936851886;
int zero = 0;
int var_12 = 1482475600;
unsigned char var_13 = (unsigned char)106;
unsigned short var_14 = (unsigned short)34500;
unsigned int var_15 = 535725802U;
unsigned short var_16 = (unsigned short)68;
signed char var_17 = (signed char)39;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 14727681253503516528ULL : 6749401002610353502ULL;
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
