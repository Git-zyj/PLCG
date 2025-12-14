#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
unsigned int var_4 = 409571260U;
unsigned char var_5 = (unsigned char)90;
unsigned long long int var_8 = 17909424478983446393ULL;
unsigned long long int var_11 = 7063884174850561470ULL;
int zero = 0;
unsigned long long int var_17 = 4059743214813745877ULL;
unsigned char var_18 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
