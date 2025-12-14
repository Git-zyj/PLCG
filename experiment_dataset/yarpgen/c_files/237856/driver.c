#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3835361784U;
signed char var_5 = (signed char)-5;
signed char var_6 = (signed char)-10;
unsigned long long int var_7 = 16342151453999916934ULL;
signed char var_8 = (signed char)29;
short var_9 = (short)-32167;
int zero = 0;
signed char var_10 = (signed char)40;
int var_11 = -1454039701;
int var_12 = 1414120504;
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
