#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3215400438U;
unsigned char var_2 = (unsigned char)29;
short var_3 = (short)19405;
unsigned char var_4 = (unsigned char)69;
long long int var_6 = -4376183097059610602LL;
signed char var_7 = (signed char)-122;
long long int var_9 = 12384072253288521LL;
int zero = 0;
long long int var_10 = 1320286818383502613LL;
int var_11 = -962006348;
long long int var_12 = 5583495409974222492LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
