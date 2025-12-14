#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned short var_3 = (unsigned short)1590;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)9137;
unsigned int var_13 = 2008936243U;
unsigned char var_16 = (unsigned char)79;
int var_18 = 373370528;
int zero = 0;
short var_19 = (short)-6361;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 18222163028328962216ULL;
short var_22 = (short)12541;
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
