#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3033558255U;
unsigned int var_10 = 1365123637U;
short var_12 = (short)-24631;
int var_18 = 350185923;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2839300519U;
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
