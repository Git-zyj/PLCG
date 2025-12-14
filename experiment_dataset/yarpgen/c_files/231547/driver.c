#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3934520295U;
unsigned long long int var_8 = 14110427521714495964ULL;
unsigned long long int var_12 = 6122467218539909479ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)245;
unsigned char var_16 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
