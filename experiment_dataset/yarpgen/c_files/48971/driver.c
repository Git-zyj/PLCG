#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-94;
unsigned long long int var_9 = 10666941798051001392ULL;
unsigned int var_17 = 666664643U;
int zero = 0;
unsigned char var_19 = (unsigned char)50;
signed char var_20 = (signed char)49;
void init() {
}

void checksum() {
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
