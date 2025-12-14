#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
short var_6 = (short)16303;
unsigned int var_7 = 2713556422U;
int var_10 = -1406895852;
int zero = 0;
unsigned short var_13 = (unsigned short)20318;
signed char var_14 = (signed char)-68;
void init() {
}

void checksum() {
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
