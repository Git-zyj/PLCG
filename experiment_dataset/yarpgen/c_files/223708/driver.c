#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5906815171252632045ULL;
unsigned int var_2 = 2696202011U;
unsigned char var_11 = (unsigned char)26;
signed char var_12 = (signed char)125;
int zero = 0;
unsigned short var_14 = (unsigned short)25321;
signed char var_15 = (signed char)69;
void init() {
}

void checksum() {
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
