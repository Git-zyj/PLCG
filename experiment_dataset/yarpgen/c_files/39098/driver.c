#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-24;
int var_11 = 264553305;
int var_12 = 698111272;
long long int var_15 = 82040299997268196LL;
short var_16 = (short)-27535;
short var_17 = (short)2952;
int zero = 0;
int var_20 = -846401795;
unsigned char var_21 = (unsigned char)156;
int var_22 = 605086685;
void init() {
}

void checksum() {
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
