#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-23;
unsigned long long int var_10 = 613661130071397386ULL;
int zero = 0;
signed char var_12 = (signed char)-117;
unsigned long long int var_13 = 9931528651020989603ULL;
short var_14 = (short)-23705;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
