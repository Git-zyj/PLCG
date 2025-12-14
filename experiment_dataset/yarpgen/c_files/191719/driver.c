#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)228;
signed char var_10 = (signed char)82;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
short var_21 = (short)-9392;
long long int var_22 = -4711264430646124102LL;
unsigned char var_23 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
