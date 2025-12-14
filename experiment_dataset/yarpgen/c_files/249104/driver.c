#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)24793;
int var_7 = -1951349236;
unsigned char var_18 = (unsigned char)234;
int zero = 0;
signed char var_20 = (signed char)-72;
long long int var_21 = 7883045848221174601LL;
long long int var_22 = 1776443529762329713LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
