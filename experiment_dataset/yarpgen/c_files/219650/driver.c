#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-60;
signed char var_5 = (signed char)47;
unsigned long long int var_15 = 2994487565196257901ULL;
int zero = 0;
long long int var_16 = 5812756049968003566LL;
long long int var_17 = -4062485302498625339LL;
long long int var_18 = 7640603740993537983LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
