#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1296956621450253423ULL;
unsigned long long int var_2 = 3218567815765681224ULL;
unsigned short var_3 = (unsigned short)57356;
unsigned int var_13 = 2154240153U;
int zero = 0;
int var_15 = -371520149;
signed char var_16 = (signed char)-119;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
