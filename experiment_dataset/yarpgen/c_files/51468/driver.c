#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 678251805;
unsigned long long int var_6 = 12265986428322369466ULL;
signed char var_9 = (signed char)-122;
unsigned int var_10 = 1209504824U;
int zero = 0;
unsigned short var_11 = (unsigned short)4521;
unsigned short var_12 = (unsigned short)44268;
void init() {
}

void checksum() {
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
