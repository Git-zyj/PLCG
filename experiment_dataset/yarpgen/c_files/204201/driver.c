#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
unsigned long long int var_3 = 16539408746191494764ULL;
short var_15 = (short)-21509;
int zero = 0;
unsigned long long int var_20 = 14652644824506475992ULL;
unsigned long long int var_21 = 14930285855386254664ULL;
void init() {
}

void checksum() {
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
