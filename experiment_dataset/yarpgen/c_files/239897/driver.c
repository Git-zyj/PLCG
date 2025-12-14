#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19823;
signed char var_4 = (signed char)10;
int zero = 0;
unsigned long long int var_16 = 6232884613991553043ULL;
unsigned char var_17 = (unsigned char)37;
unsigned long long int var_18 = 5637448478951522426ULL;
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
