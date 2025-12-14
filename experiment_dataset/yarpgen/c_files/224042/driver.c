#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1051158569U;
unsigned char var_4 = (unsigned char)108;
unsigned char var_7 = (unsigned char)130;
int zero = 0;
signed char var_16 = (signed char)-55;
unsigned int var_17 = 2044148710U;
unsigned char var_18 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
