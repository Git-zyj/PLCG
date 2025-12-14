#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16308;
signed char var_1 = (signed char)-121;
unsigned short var_2 = (unsigned short)43660;
unsigned long long int var_6 = 7336887438437177111ULL;
int zero = 0;
unsigned long long int var_10 = 4190363821674684056ULL;
unsigned int var_11 = 3447498464U;
signed char var_12 = (signed char)40;
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
