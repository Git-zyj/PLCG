#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)79;
unsigned char var_13 = (unsigned char)70;
short var_15 = (short)-23806;
int zero = 0;
signed char var_19 = (signed char)85;
short var_20 = (short)-20186;
unsigned long long int var_21 = 13480030335435741653ULL;
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
