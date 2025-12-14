#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)115;
unsigned int var_10 = 3455916246U;
int zero = 0;
unsigned long long int var_17 = 14293173456979243244ULL;
unsigned int var_18 = 956940741U;
unsigned int var_19 = 654985718U;
unsigned char var_20 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
