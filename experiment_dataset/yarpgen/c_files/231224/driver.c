#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 480431524U;
int var_7 = -669834741;
unsigned char var_8 = (unsigned char)79;
unsigned int var_9 = 1925993120U;
signed char var_11 = (signed char)65;
int zero = 0;
unsigned long long int var_12 = 5587359139524046978ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)212;
long long int var_15 = -7840771549332422975LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
