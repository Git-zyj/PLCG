#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
short var_2 = (short)11020;
int var_11 = 1343401517;
signed char var_12 = (signed char)9;
int zero = 0;
unsigned long long int var_14 = 10647061060628276418ULL;
signed char var_15 = (signed char)-103;
void init() {
}

void checksum() {
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
