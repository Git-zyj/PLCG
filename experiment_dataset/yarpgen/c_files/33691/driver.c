#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 196429451301013667LL;
unsigned char var_8 = (unsigned char)193;
unsigned int var_9 = 2643279005U;
int var_10 = -1842508056;
int zero = 0;
unsigned int var_19 = 632663085U;
long long int var_20 = -2543687503868345382LL;
long long int var_21 = -2797595262831331107LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
