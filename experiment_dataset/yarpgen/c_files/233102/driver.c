#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58989;
unsigned long long int var_7 = 16277864618703255141ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)21384;
int zero = 0;
int var_12 = 2024450905;
signed char var_13 = (signed char)-96;
int var_14 = 1675255911;
void init() {
}

void checksum() {
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
