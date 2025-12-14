#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1408206313;
signed char var_5 = (signed char)-3;
unsigned int var_8 = 2971468191U;
int zero = 0;
unsigned long long int var_10 = 12120923223287512307ULL;
int var_11 = 1157344639;
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
