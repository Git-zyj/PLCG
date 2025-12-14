#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)20;
unsigned int var_4 = 1656644771U;
signed char var_5 = (signed char)-110;
int var_7 = -303905009;
int zero = 0;
unsigned short var_11 = (unsigned short)61319;
unsigned long long int var_12 = 17340518507092525529ULL;
void init() {
}

void checksum() {
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
