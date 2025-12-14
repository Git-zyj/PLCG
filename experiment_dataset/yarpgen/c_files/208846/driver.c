#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11485968286078207767ULL;
unsigned char var_5 = (unsigned char)92;
signed char var_7 = (signed char)-98;
int zero = 0;
unsigned long long int var_14 = 17504020896507875633ULL;
unsigned long long int var_15 = 12723403343426209348ULL;
unsigned long long int var_16 = 1234966980883163649ULL;
signed char var_17 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
