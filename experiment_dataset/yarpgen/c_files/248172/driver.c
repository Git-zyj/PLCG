#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 648826042852378499ULL;
unsigned long long int var_3 = 7262198461687346012ULL;
signed char var_4 = (signed char)106;
unsigned int var_5 = 3224666630U;
unsigned long long int var_9 = 15262823741467833257ULL;
int zero = 0;
unsigned long long int var_13 = 16696797014450094040ULL;
signed char var_14 = (signed char)5;
unsigned long long int var_15 = 12091498857371688943ULL;
int var_16 = 1437847599;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
