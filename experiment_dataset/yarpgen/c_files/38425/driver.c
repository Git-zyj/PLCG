#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-71;
signed char var_12 = (signed char)67;
signed char var_16 = (signed char)-9;
unsigned char var_17 = (unsigned char)172;
int zero = 0;
unsigned char var_18 = (unsigned char)59;
signed char var_19 = (signed char)38;
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
