#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-108;
signed char var_4 = (signed char)26;
unsigned long long int var_7 = 6204051254607291910ULL;
unsigned int var_11 = 4154766374U;
signed char var_12 = (signed char)109;
unsigned long long int var_14 = 17409864405883842034ULL;
signed char var_16 = (signed char)-74;
int zero = 0;
signed char var_17 = (signed char)-65;
signed char var_18 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
