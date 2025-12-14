#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)63;
signed char var_9 = (signed char)63;
long long int var_10 = -6477322716425977314LL;
long long int var_11 = -1633557002007877598LL;
int zero = 0;
unsigned int var_16 = 1648074036U;
unsigned char var_17 = (unsigned char)139;
signed char var_18 = (signed char)(-127 - 1);
signed char var_19 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
