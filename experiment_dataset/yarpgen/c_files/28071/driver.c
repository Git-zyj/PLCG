#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13642;
unsigned long long int var_5 = 15631930533152132123ULL;
int var_12 = 1974207470;
unsigned char var_13 = (unsigned char)202;
unsigned int var_15 = 1500559094U;
int zero = 0;
int var_18 = -44577889;
long long int var_19 = -4129483263691700153LL;
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
