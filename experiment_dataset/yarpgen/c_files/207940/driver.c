#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18319;
unsigned char var_5 = (unsigned char)176;
int var_14 = -983276170;
unsigned long long int var_15 = 17367404524226061172ULL;
unsigned int var_17 = 845065793U;
unsigned char var_18 = (unsigned char)67;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
unsigned char var_20 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
