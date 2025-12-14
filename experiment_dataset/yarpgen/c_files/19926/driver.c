#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
signed char var_2 = (signed char)-46;
unsigned long long int var_6 = 7061479591676676597ULL;
signed char var_8 = (signed char)-99;
unsigned long long int var_9 = 1449478243373383346ULL;
signed char var_16 = (signed char)60;
int zero = 0;
signed char var_17 = (signed char)33;
signed char var_18 = (signed char)-102;
unsigned long long int var_19 = 3139799284167434832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
