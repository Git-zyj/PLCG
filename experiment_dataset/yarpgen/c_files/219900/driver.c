#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
signed char var_5 = (signed char)-23;
unsigned short var_9 = (unsigned short)21497;
unsigned short var_10 = (unsigned short)36519;
int var_12 = 1104439623;
signed char var_13 = (signed char)118;
int zero = 0;
signed char var_19 = (signed char)20;
int var_20 = 1983733631;
void init() {
}

void checksum() {
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
