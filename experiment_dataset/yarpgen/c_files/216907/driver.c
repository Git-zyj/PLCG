#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 625877545U;
signed char var_4 = (signed char)76;
signed char var_6 = (signed char)-105;
unsigned short var_7 = (unsigned short)44594;
long long int var_12 = 7279038819491183404LL;
int zero = 0;
unsigned int var_13 = 4215271807U;
unsigned short var_14 = (unsigned short)60103;
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
