#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
signed char var_18 = (signed char)19;
int zero = 0;
unsigned long long int var_20 = 15503652592967160367ULL;
unsigned char var_21 = (unsigned char)120;
unsigned int var_22 = 2665812285U;
long long int var_23 = -1724723932810445122LL;
unsigned short var_24 = (unsigned short)49885;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
