#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7948;
signed char var_7 = (signed char)17;
int var_15 = 508243851;
int zero = 0;
unsigned long long int var_16 = 13938856175056267227ULL;
unsigned long long int var_17 = 7895952097243967645ULL;
int var_18 = -2032059486;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
