#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1368592228;
_Bool var_2 = (_Bool)0;
signed char var_8 = (signed char)93;
unsigned char var_9 = (unsigned char)161;
signed char var_10 = (signed char)71;
unsigned char var_12 = (unsigned char)196;
int zero = 0;
signed char var_15 = (signed char)25;
int var_16 = -287047813;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
