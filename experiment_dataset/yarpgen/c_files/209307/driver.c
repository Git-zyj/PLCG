#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 298667007U;
unsigned long long int var_8 = 1318960866550125535ULL;
unsigned char var_10 = (unsigned char)18;
short var_11 = (short)23989;
int zero = 0;
int var_12 = 1322133109;
unsigned short var_13 = (unsigned short)64997;
void init() {
}

void checksum() {
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
