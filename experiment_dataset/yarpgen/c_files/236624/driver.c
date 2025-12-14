#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4347998065007748113ULL;
signed char var_4 = (signed char)-59;
signed char var_8 = (signed char)25;
unsigned int var_11 = 109192966U;
int zero = 0;
long long int var_13 = -2643273240898161680LL;
long long int var_14 = -761866702547111166LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
