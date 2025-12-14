#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1495007361;
signed char var_3 = (signed char)-112;
unsigned long long int var_6 = 12756428933548799727ULL;
signed char var_11 = (signed char)94;
int var_12 = -1466735467;
int zero = 0;
signed char var_13 = (signed char)11;
signed char var_14 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
