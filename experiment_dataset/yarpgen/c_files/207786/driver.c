#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
unsigned char var_6 = (unsigned char)53;
unsigned char var_9 = (unsigned char)169;
unsigned char var_12 = (unsigned char)172;
unsigned long long int var_14 = 17598884173943415944ULL;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
unsigned int var_17 = 3327709447U;
unsigned long long int var_18 = 14798641837557323847ULL;
unsigned int var_19 = 532198741U;
signed char var_20 = (signed char)-55;
unsigned int var_21 = 2643408707U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
