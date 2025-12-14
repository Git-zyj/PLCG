#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6767722670079618258LL;
signed char var_7 = (signed char)-32;
unsigned long long int var_10 = 9735917489963605514ULL;
int zero = 0;
unsigned int var_16 = 1668303904U;
unsigned char var_17 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
