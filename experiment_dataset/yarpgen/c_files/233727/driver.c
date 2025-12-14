#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3727118651U;
unsigned long long int var_4 = 12251407590388197375ULL;
unsigned short var_5 = (unsigned short)40840;
unsigned short var_7 = (unsigned short)6388;
unsigned int var_8 = 1893466859U;
short var_9 = (short)-2674;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5525958710156867184ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)5243;
int zero = 0;
unsigned int var_14 = 198573792U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-11640;
unsigned short var_17 = (unsigned short)7004;
void init() {
}

void checksum() {
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
