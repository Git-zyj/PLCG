#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42828;
unsigned short var_7 = (unsigned short)39937;
unsigned int var_14 = 1048514803U;
int zero = 0;
unsigned long long int var_18 = 14718529338153752721ULL;
unsigned short var_19 = (unsigned short)14836;
unsigned int var_20 = 1064551153U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
