#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
unsigned long long int var_5 = 8575527454157306690ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)164;
int var_11 = -1710619834;
unsigned long long int var_12 = 17443007425475638855ULL;
unsigned long long int var_13 = 16186549259212849505ULL;
int var_14 = -1488526051;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
