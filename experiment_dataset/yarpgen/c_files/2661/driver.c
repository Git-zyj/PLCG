#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4810732473218113051ULL;
unsigned long long int var_4 = 11790315929333323380ULL;
unsigned char var_6 = (unsigned char)126;
unsigned char var_9 = (unsigned char)36;
unsigned int var_10 = 4119816614U;
int zero = 0;
short var_13 = (short)-1967;
int var_14 = 1969802863;
short var_15 = (short)59;
void init() {
}

void checksum() {
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
