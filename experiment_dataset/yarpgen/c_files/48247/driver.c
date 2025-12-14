#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6101007023246101313ULL;
signed char var_2 = (signed char)-120;
unsigned char var_4 = (unsigned char)102;
unsigned char var_5 = (unsigned char)38;
unsigned short var_6 = (unsigned short)60132;
int var_9 = 1680231589;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned long long int var_12 = 2611543470316583736ULL;
signed char var_13 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
