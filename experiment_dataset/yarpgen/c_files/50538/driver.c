#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2366828512U;
unsigned long long int var_6 = 7700858876130869955ULL;
unsigned long long int var_7 = 18176238746942759613ULL;
int zero = 0;
unsigned long long int var_11 = 2204144562952986496ULL;
unsigned short var_12 = (unsigned short)29125;
void init() {
}

void checksum() {
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
