#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7327032465733080150LL;
unsigned char var_1 = (unsigned char)163;
unsigned char var_5 = (unsigned char)132;
long long int var_8 = -5606861195050315447LL;
int zero = 0;
unsigned char var_12 = (unsigned char)1;
int var_13 = 1564668300;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2418792650U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
