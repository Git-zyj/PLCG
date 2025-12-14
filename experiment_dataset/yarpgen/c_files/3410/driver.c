#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
int var_1 = -764286366;
signed char var_3 = (signed char)105;
int var_4 = 2011477834;
int var_7 = -1437919262;
signed char var_9 = (signed char)-42;
signed char var_10 = (signed char)122;
int zero = 0;
unsigned short var_15 = (unsigned short)480;
unsigned char var_16 = (unsigned char)141;
void init() {
}

void checksum() {
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
