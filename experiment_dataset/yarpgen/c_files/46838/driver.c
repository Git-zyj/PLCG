#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -4072707233861861619LL;
short var_7 = (short)30772;
long long int var_9 = 4558534983738074193LL;
unsigned long long int var_10 = 12917685130054452474ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
int var_13 = 1451422187;
unsigned int var_14 = 282311641U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
