#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1936241678;
unsigned char var_6 = (unsigned char)185;
signed char var_9 = (signed char)102;
signed char var_14 = (signed char)-23;
int zero = 0;
signed char var_18 = (signed char)72;
signed char var_19 = (signed char)-83;
int var_20 = 249208803;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
