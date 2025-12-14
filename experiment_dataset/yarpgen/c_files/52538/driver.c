#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -46657406;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)178;
int zero = 0;
long long int var_10 = 9069812485584136286LL;
long long int var_11 = 2020688173910413336LL;
unsigned long long int var_12 = 4936547970175103137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
