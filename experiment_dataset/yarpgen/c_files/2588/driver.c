#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)81;
signed char var_9 = (signed char)-55;
int var_13 = 1850492937;
int zero = 0;
unsigned long long int var_19 = 3894172045459036035ULL;
int var_20 = 1985117803;
int var_21 = -1133030611;
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
