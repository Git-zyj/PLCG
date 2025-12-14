#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4176370935429348081ULL;
signed char var_15 = (signed char)-120;
int zero = 0;
int var_19 = 1121183326;
int var_20 = -244600822;
unsigned short var_21 = (unsigned short)43094;
unsigned int var_22 = 1470536792U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
