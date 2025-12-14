#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1746974404;
unsigned int var_8 = 1553935064U;
signed char var_15 = (signed char)-127;
int zero = 0;
int var_18 = -290838379;
unsigned char var_19 = (unsigned char)46;
unsigned long long int var_20 = 11370478269843910061ULL;
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
