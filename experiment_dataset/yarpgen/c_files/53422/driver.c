#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15270104351674030705ULL;
unsigned char var_5 = (unsigned char)31;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15543879407150336897ULL;
unsigned short var_17 = (unsigned short)28127;
void init() {
}

void checksum() {
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
