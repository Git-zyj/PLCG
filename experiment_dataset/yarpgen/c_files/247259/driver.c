#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63119;
unsigned char var_2 = (unsigned char)40;
unsigned char var_6 = (unsigned char)105;
signed char var_8 = (signed char)67;
unsigned short var_11 = (unsigned short)9541;
int zero = 0;
signed char var_12 = (signed char)79;
unsigned short var_13 = (unsigned short)44913;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
