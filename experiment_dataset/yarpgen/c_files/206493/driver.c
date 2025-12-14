#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 609595305936452900ULL;
unsigned short var_2 = (unsigned short)7717;
int var_4 = 863166501;
signed char var_15 = (signed char)-13;
unsigned int var_17 = 2725831177U;
int zero = 0;
unsigned int var_18 = 2628277248U;
unsigned int var_19 = 3702752796U;
unsigned short var_20 = (unsigned short)46739;
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
