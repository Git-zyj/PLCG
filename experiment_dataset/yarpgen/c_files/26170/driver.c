#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)33;
unsigned short var_9 = (unsigned short)53405;
signed char var_13 = (signed char)64;
int var_15 = -1287400689;
int zero = 0;
signed char var_18 = (signed char)-36;
short var_19 = (short)-795;
int var_20 = 694462591;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
