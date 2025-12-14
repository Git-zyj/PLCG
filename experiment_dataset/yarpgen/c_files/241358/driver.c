#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -871088456;
unsigned long long int var_3 = 3221509108511739370ULL;
unsigned short var_10 = (unsigned short)49342;
signed char var_11 = (signed char)-106;
int zero = 0;
unsigned long long int var_15 = 14057815503525777549ULL;
unsigned int var_16 = 3054479933U;
void init() {
}

void checksum() {
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
