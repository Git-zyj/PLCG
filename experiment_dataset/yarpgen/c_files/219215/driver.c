#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3026951279499189615ULL;
int var_2 = -1220727151;
unsigned char var_4 = (unsigned char)134;
signed char var_7 = (signed char)-66;
int zero = 0;
long long int var_10 = -7302379835214734674LL;
signed char var_11 = (signed char)14;
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
