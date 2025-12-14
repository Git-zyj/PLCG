#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 693481054453942087LL;
int var_8 = 90264277;
unsigned char var_10 = (unsigned char)192;
unsigned long long int var_15 = 7259897903896521719ULL;
unsigned char var_17 = (unsigned char)23;
int zero = 0;
long long int var_19 = 7191677788105700522LL;
signed char var_20 = (signed char)-119;
short var_21 = (short)-19827;
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
