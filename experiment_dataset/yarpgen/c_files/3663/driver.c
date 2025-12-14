#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -692404355;
unsigned long long int var_1 = 3182077308173788940ULL;
long long int var_3 = 3355456609532670763LL;
signed char var_4 = (signed char)-13;
unsigned int var_7 = 3112215597U;
int var_9 = -1742856142;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
short var_14 = (short)-7821;
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
