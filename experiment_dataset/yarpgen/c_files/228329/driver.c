#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12565902542878861172ULL;
signed char var_9 = (signed char)-3;
unsigned char var_11 = (unsigned char)92;
int zero = 0;
unsigned char var_12 = (unsigned char)116;
unsigned char var_13 = (unsigned char)103;
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
