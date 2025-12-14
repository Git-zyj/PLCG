#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
signed char var_1 = (signed char)76;
unsigned long long int var_2 = 3363366029963695752ULL;
unsigned long long int var_8 = 8311709785048650408ULL;
unsigned long long int var_14 = 10503658116835781348ULL;
int zero = 0;
unsigned long long int var_19 = 7110864640561929545ULL;
unsigned long long int var_20 = 8360143662374391872ULL;
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
