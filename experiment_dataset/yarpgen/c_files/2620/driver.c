#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 141142720;
unsigned char var_1 = (unsigned char)100;
unsigned short var_3 = (unsigned short)45885;
short var_4 = (short)-14653;
unsigned short var_5 = (unsigned short)2676;
unsigned short var_6 = (unsigned short)56712;
unsigned char var_7 = (unsigned char)196;
int var_8 = -439075473;
int var_11 = -532291665;
int zero = 0;
unsigned short var_12 = (unsigned short)948;
long long int var_13 = 3600821705735253797LL;
signed char var_14 = (signed char)-57;
short var_15 = (short)11200;
unsigned short var_16 = (unsigned short)58829;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
