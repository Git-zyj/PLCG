#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
signed char var_1 = (signed char)-13;
unsigned char var_3 = (unsigned char)64;
long long int var_5 = 8143559215907928794LL;
int var_12 = -749396091;
int zero = 0;
unsigned char var_13 = (unsigned char)134;
unsigned long long int var_14 = 3960864732554637006ULL;
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
