#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 184903310;
signed char var_6 = (signed char)-41;
long long int var_7 = 3354051174207524723LL;
long long int var_9 = 3620885783761921374LL;
int zero = 0;
unsigned int var_13 = 778024750U;
long long int var_14 = -8416276390056923504LL;
long long int var_15 = 7745020686259541902LL;
unsigned short var_16 = (unsigned short)29231;
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
