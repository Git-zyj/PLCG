#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 45144720;
unsigned char var_14 = (unsigned char)183;
unsigned char var_15 = (unsigned char)137;
unsigned char var_19 = (unsigned char)40;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
int var_21 = -1838619669;
unsigned long long int var_22 = 7298059109435837368ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
