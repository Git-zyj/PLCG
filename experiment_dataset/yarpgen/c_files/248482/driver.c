#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1917;
unsigned int var_3 = 3295026552U;
unsigned short var_5 = (unsigned short)26736;
long long int var_10 = 8039617239493896404LL;
unsigned long long int var_12 = 3909823929397519696ULL;
int zero = 0;
unsigned int var_13 = 1614912234U;
unsigned char var_14 = (unsigned char)54;
void init() {
}

void checksum() {
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
