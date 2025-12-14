#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1459653622;
signed char var_3 = (signed char)-20;
unsigned int var_6 = 7447745U;
int var_7 = 1702468562;
int zero = 0;
unsigned char var_10 = (unsigned char)136;
unsigned long long int var_11 = 376671294757600198ULL;
long long int var_12 = 262064276432022234LL;
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
