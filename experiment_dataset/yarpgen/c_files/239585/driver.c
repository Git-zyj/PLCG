#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1266598915975762702LL;
long long int var_3 = -3817145761221802305LL;
int var_4 = 1788525211;
unsigned short var_9 = (unsigned short)39032;
int zero = 0;
long long int var_10 = -7880154759669133265LL;
int var_11 = 90090690;
unsigned short var_12 = (unsigned short)45583;
short var_13 = (short)8219;
signed char var_14 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
