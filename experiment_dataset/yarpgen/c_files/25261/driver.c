#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61947;
unsigned short var_2 = (unsigned short)55977;
unsigned long long int var_5 = 17166716764649036626ULL;
unsigned int var_6 = 4070571723U;
unsigned long long int var_7 = 7593861208193321292ULL;
int zero = 0;
signed char var_10 = (signed char)35;
unsigned long long int var_11 = 10837224232567034642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
