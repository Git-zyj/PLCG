#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
unsigned short var_1 = (unsigned short)51213;
int var_5 = 122798216;
unsigned long long int var_8 = 2563381424999277033ULL;
unsigned char var_9 = (unsigned char)0;
unsigned char var_12 = (unsigned char)25;
unsigned char var_14 = (unsigned char)23;
int zero = 0;
unsigned long long int var_15 = 11116742888550881530ULL;
int var_16 = -1280442423;
unsigned int var_17 = 1302240721U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
