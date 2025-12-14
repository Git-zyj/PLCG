#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 689285080U;
int var_9 = 26336156;
unsigned long long int var_10 = 1171995969991921068ULL;
signed char var_15 = (signed char)-15;
int var_16 = 872905341;
int zero = 0;
unsigned long long int var_18 = 8818439660763650291ULL;
long long int var_19 = 5017308367999978169LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
