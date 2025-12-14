#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2058;
long long int var_1 = -3177002967286581816LL;
unsigned long long int var_2 = 6875522601565249053ULL;
unsigned long long int var_5 = 17035882293479744828ULL;
unsigned long long int var_9 = 3668722592402427860ULL;
int zero = 0;
signed char var_11 = (signed char)-78;
unsigned int var_12 = 169288548U;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
