#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
int var_3 = -764387391;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)66;
unsigned char var_9 = (unsigned char)160;
int zero = 0;
unsigned long long int var_10 = 17946738107987697014ULL;
unsigned long long int var_11 = 6209283976203849485ULL;
unsigned long long int var_12 = 17381965334679702086ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
