#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15238927649716245403ULL;
short var_5 = (short)30732;
short var_8 = (short)15268;
int zero = 0;
short var_12 = (short)24407;
unsigned long long int var_13 = 8216582428350279778ULL;
unsigned long long int var_14 = 13058378419868482276ULL;
unsigned long long int var_15 = 5386001096447241920ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
