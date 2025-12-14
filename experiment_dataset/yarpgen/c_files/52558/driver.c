#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 205782882U;
unsigned long long int var_13 = 4215946749385421839ULL;
short var_17 = (short)14529;
int zero = 0;
unsigned int var_20 = 3338747056U;
unsigned long long int var_21 = 13026917690236483822ULL;
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
