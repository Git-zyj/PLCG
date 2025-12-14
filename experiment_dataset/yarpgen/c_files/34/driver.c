#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
unsigned char var_3 = (unsigned char)148;
unsigned char var_4 = (unsigned char)67;
signed char var_8 = (signed char)-82;
unsigned char var_9 = (unsigned char)209;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
unsigned int var_18 = 1735014322U;
unsigned int var_19 = 835154013U;
unsigned char var_20 = (unsigned char)84;
unsigned char var_21 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
