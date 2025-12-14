#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
long long int var_1 = 2705062935671553805LL;
unsigned short var_4 = (unsigned short)53587;
long long int var_5 = 8647081474647995728LL;
int zero = 0;
signed char var_10 = (signed char)-123;
short var_11 = (short)-24251;
signed char var_12 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
