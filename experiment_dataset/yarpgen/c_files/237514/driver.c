#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)81;
signed char var_10 = (signed char)-17;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned long long int var_14 = 7956888771831547907ULL;
unsigned char var_15 = (unsigned char)168;
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
