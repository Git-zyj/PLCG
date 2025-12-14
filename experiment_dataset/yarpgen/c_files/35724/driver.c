#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51419;
unsigned long long int var_7 = 4626693368121837737ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-4;
int var_15 = 337259586;
void init() {
}

void checksum() {
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
