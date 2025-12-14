#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -67822214;
signed char var_8 = (signed char)79;
unsigned short var_11 = (unsigned short)49075;
int zero = 0;
signed char var_19 = (signed char)-47;
short var_20 = (short)27309;
unsigned char var_21 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
