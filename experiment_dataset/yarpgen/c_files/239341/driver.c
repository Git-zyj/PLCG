#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -37955105;
unsigned short var_8 = (unsigned short)5506;
unsigned long long int var_9 = 15776415127843689777ULL;
int zero = 0;
int var_10 = 787105339;
int var_11 = -1985416135;
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
