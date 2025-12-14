#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16025909351963045937ULL;
short var_7 = (short)26415;
unsigned char var_9 = (unsigned char)245;
unsigned int var_15 = 591114643U;
int zero = 0;
int var_17 = -978574101;
unsigned int var_18 = 2129686525U;
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
