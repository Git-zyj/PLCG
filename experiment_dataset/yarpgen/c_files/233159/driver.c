#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned char var_2 = (unsigned char)188;
unsigned long long int var_3 = 16145110634962949987ULL;
unsigned long long int var_8 = 16229474024649157117ULL;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
unsigned long long int var_13 = 8397416557476940663ULL;
unsigned long long int var_14 = 2062220054169189639ULL;
signed char var_15 = (signed char)12;
int var_16 = 518547205;
signed char var_17 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
