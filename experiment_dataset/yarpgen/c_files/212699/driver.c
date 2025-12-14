#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3412755375U;
unsigned long long int var_2 = 10101640673161737168ULL;
signed char var_8 = (signed char)-110;
unsigned int var_11 = 673770276U;
int zero = 0;
unsigned long long int var_15 = 921974072000758550ULL;
unsigned long long int var_16 = 12196105150320940288ULL;
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
