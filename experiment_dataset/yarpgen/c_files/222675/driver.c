#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 749403913U;
signed char var_3 = (signed char)76;
unsigned int var_9 = 1077638991U;
int zero = 0;
long long int var_10 = 5302988518824763606LL;
unsigned short var_11 = (unsigned short)64660;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
