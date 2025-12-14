#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1025545099;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)7259;
int zero = 0;
unsigned long long int var_10 = 10330694388915235794ULL;
unsigned char var_11 = (unsigned char)25;
int var_12 = -650467680;
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
