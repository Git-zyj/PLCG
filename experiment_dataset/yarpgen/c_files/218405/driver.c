#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -75813832;
unsigned char var_4 = (unsigned char)80;
unsigned long long int var_6 = 10683878273994148023ULL;
int var_8 = -1923151556;
unsigned char var_11 = (unsigned char)30;
unsigned long long int var_12 = 10726081215670037173ULL;
unsigned long long int var_13 = 11528183510500655405ULL;
long long int var_14 = -707840254440239236LL;
unsigned short var_16 = (unsigned short)48282;
int zero = 0;
int var_19 = -1829003544;
signed char var_20 = (signed char)37;
unsigned char var_21 = (unsigned char)54;
signed char var_22 = (signed char)72;
void init() {
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
