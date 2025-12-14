#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10780714441533986904ULL;
unsigned long long int var_7 = 5371549540894913378ULL;
int zero = 0;
unsigned long long int var_13 = 14841340476466471883ULL;
unsigned long long int var_14 = 14410846805031092843ULL;
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
