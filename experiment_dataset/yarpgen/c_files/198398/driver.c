#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned short var_2 = (unsigned short)42636;
unsigned long long int var_4 = 14491057870199319627ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 6305689949347895089ULL;
int zero = 0;
short var_15 = (short)4393;
unsigned int var_16 = 2519143590U;
void init() {
}

void checksum() {
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
