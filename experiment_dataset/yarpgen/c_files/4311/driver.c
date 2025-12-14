#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16413684041479567765ULL;
unsigned int var_5 = 785397628U;
unsigned int var_10 = 1829989505U;
unsigned long long int var_12 = 7820793502755016161ULL;
unsigned char var_14 = (unsigned char)232;
int zero = 0;
unsigned int var_15 = 979012781U;
unsigned int var_16 = 3561808829U;
unsigned long long int var_17 = 4650834059867087362ULL;
unsigned short var_18 = (unsigned short)1623;
int var_19 = 307407822;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)9130;
}

void checksum() {
    hash(&seed, var_15);
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
