#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 498810386;
int var_10 = 277267134;
unsigned long long int var_14 = 16659272623704593418ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)188;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15587658873321911252ULL;
_Bool var_20 = (_Bool)0;
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
