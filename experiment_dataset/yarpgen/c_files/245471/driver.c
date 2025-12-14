#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 549167157U;
unsigned char var_11 = (unsigned char)37;
unsigned int var_12 = 1319754868U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)26235;
int var_18 = 1295627440;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
