#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 916888661;
signed char var_10 = (signed char)103;
int var_13 = 1913633312;
unsigned long long int var_14 = 12891775775821376470ULL;
int zero = 0;
int var_19 = -1506841726;
short var_20 = (short)-21133;
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
