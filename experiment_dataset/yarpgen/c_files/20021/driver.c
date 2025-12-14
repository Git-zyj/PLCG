#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-44;
int var_5 = 1699054824;
int var_6 = 442168375;
unsigned short var_9 = (unsigned short)9734;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
signed char var_11 = (signed char)127;
unsigned int var_12 = 3420944109U;
unsigned long long int var_13 = 11161057062575439634ULL;
int var_14 = -1680235654;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
