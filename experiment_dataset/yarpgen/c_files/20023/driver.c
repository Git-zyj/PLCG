#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 267285009U;
unsigned char var_3 = (unsigned char)172;
unsigned int var_4 = 495047924U;
long long int var_6 = -5632479839354925384LL;
long long int var_7 = 3980226462623724521LL;
signed char var_10 = (signed char)27;
int zero = 0;
unsigned int var_11 = 308427231U;
unsigned int var_12 = 894104410U;
unsigned short var_13 = (unsigned short)39252;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
