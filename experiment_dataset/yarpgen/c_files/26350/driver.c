#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)35;
signed char var_12 = (signed char)-46;
unsigned char var_15 = (unsigned char)210;
int zero = 0;
unsigned char var_19 = (unsigned char)137;
unsigned char var_20 = (unsigned char)198;
unsigned char var_21 = (unsigned char)126;
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
