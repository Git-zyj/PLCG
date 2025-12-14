#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4244085697393647852LL;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)66;
int var_11 = 796355875;
long long int var_12 = -9158185135055376984LL;
int zero = 0;
unsigned char var_14 = (unsigned char)61;
long long int var_15 = 2752874786732926257LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
