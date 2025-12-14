#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1666937264;
signed char var_5 = (signed char)-19;
long long int var_10 = -1757193564823749547LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-31037;
unsigned char var_15 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
