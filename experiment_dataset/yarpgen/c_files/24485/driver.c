#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)231;
unsigned long long int var_12 = 14767595814957297412ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)24156;
short var_20 = (short)2762;
unsigned long long int var_21 = 15744660745155134387ULL;
signed char var_22 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
