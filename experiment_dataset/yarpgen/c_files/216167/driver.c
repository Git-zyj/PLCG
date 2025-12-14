#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -554899351;
int var_10 = 41342701;
signed char var_11 = (signed char)-123;
unsigned char var_12 = (unsigned char)136;
int zero = 0;
unsigned int var_17 = 4007218353U;
unsigned int var_18 = 3176029112U;
unsigned char var_19 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
