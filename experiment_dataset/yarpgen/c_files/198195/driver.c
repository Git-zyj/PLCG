#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
signed char var_3 = (signed char)-71;
signed char var_7 = (signed char)-64;
signed char var_8 = (signed char)28;
int zero = 0;
signed char var_13 = (signed char)85;
unsigned int var_14 = 2735800833U;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
