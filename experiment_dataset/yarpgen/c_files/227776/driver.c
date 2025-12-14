#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 899812538U;
unsigned long long int var_8 = 7269601052375671682ULL;
unsigned char var_10 = (unsigned char)104;
unsigned char var_14 = (unsigned char)22;
int zero = 0;
unsigned int var_18 = 3046752163U;
unsigned char var_19 = (unsigned char)151;
void init() {
}

void checksum() {
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
