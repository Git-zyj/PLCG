#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2336449856U;
signed char var_1 = (signed char)22;
signed char var_2 = (signed char)-26;
unsigned short var_9 = (unsigned short)45400;
int zero = 0;
int var_13 = 1279406508;
int var_14 = 1190863116;
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
