#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
int var_2 = -2056918708;
unsigned char var_4 = (unsigned char)35;
int var_6 = -1358713970;
signed char var_12 = (signed char)36;
unsigned char var_13 = (unsigned char)51;
int zero = 0;
unsigned char var_17 = (unsigned char)194;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
