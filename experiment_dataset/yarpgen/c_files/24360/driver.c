#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1479671644U;
signed char var_1 = (signed char)-89;
unsigned short var_9 = (unsigned short)2156;
int zero = 0;
unsigned long long int var_10 = 9619625782107946984ULL;
unsigned long long int var_11 = 14859282662243489004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
