#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned int var_1 = 3300153921U;
int var_2 = -952464264;
int var_3 = -1125778882;
unsigned char var_4 = (unsigned char)73;
int var_6 = 1257955240;
signed char var_8 = (signed char)-115;
int var_9 = 1509178296;
int zero = 0;
short var_10 = (short)-9626;
unsigned int var_11 = 3608764584U;
short var_12 = (short)-32011;
unsigned int var_13 = 3901745805U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
