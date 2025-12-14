#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12905083719255870385ULL;
signed char var_6 = (signed char)2;
unsigned long long int var_9 = 6205380732984592819ULL;
unsigned long long int var_12 = 133989780626809428ULL;
unsigned long long int var_13 = 7132079314989937406ULL;
int zero = 0;
unsigned long long int var_14 = 9141752291902426683ULL;
unsigned long long int var_15 = 11138278992211177294ULL;
signed char var_16 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
