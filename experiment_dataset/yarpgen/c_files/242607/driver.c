#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22458;
short var_10 = (short)31398;
int zero = 0;
unsigned long long int var_19 = 10061255540126367776ULL;
unsigned long long int var_20 = 17539613055428971363ULL;
unsigned short var_21 = (unsigned short)6930;
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
