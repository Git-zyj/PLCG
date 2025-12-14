#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1945141821;
unsigned int var_5 = 2572677487U;
signed char var_8 = (signed char)-58;
unsigned short var_10 = (unsigned short)11246;
int zero = 0;
unsigned short var_16 = (unsigned short)28804;
unsigned long long int var_17 = 4742991543193551699ULL;
unsigned long long int var_18 = 16892115222904337826ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
