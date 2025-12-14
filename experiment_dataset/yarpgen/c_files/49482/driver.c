#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14243526969977807711ULL;
unsigned char var_7 = (unsigned char)254;
unsigned int var_9 = 616515181U;
int zero = 0;
unsigned long long int var_12 = 7418314136193301387ULL;
unsigned char var_13 = (unsigned char)127;
signed char var_14 = (signed char)-92;
unsigned char var_15 = (unsigned char)1;
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
