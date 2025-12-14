#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4008602810U;
signed char var_6 = (signed char)1;
unsigned int var_8 = 1882787527U;
short var_9 = (short)-11764;
unsigned long long int var_13 = 16000712853635445633ULL;
int zero = 0;
int var_14 = 1162565840;
unsigned int var_15 = 3029923939U;
signed char var_16 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
