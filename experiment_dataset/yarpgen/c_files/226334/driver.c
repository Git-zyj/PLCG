#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
unsigned long long int var_3 = 4578554351216811772ULL;
signed char var_4 = (signed char)-76;
signed char var_6 = (signed char)99;
int zero = 0;
unsigned int var_12 = 2729975263U;
signed char var_13 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
