#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
unsigned long long int var_9 = 13352100990157599522ULL;
short var_11 = (short)20140;
int var_13 = -788053934;
int zero = 0;
short var_17 = (short)-12517;
unsigned short var_18 = (unsigned short)60784;
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
