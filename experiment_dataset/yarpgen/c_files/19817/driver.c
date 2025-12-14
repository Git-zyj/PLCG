#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 294896416U;
signed char var_6 = (signed char)-15;
short var_7 = (short)-1007;
int zero = 0;
signed char var_10 = (signed char)61;
unsigned long long int var_11 = 13570488472046423602ULL;
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
