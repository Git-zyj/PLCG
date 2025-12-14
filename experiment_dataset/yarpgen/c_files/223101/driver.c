#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3396540499U;
unsigned short var_1 = (unsigned short)45083;
unsigned int var_2 = 2057382396U;
unsigned int var_3 = 2094771957U;
short var_6 = (short)5794;
unsigned int var_7 = 1313229531U;
unsigned long long int var_8 = 2609240840616400622ULL;
long long int var_10 = -617015954801039502LL;
unsigned short var_11 = (unsigned short)31890;
int zero = 0;
unsigned char var_12 = (unsigned char)100;
int var_13 = 1263240956;
unsigned short var_14 = (unsigned short)4948;
int var_15 = 779252661;
unsigned char var_16 = (unsigned char)245;
long long int var_17 = -6325108495880256656LL;
signed char arr_0 [12] ;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-104;
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
