#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)4934;
unsigned long long int var_9 = 18308360235505431165ULL;
unsigned long long int var_10 = 16291296377387507154ULL;
int zero = 0;
unsigned long long int var_11 = 15228297795218799193ULL;
unsigned long long int var_12 = 1998538057394610046ULL;
short var_13 = (short)-7607;
unsigned int var_14 = 3664321072U;
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
