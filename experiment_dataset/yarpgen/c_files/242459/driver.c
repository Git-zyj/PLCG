#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28774;
int var_6 = 1239653033;
long long int var_8 = -1305918870278675464LL;
signed char var_9 = (signed char)-92;
int zero = 0;
unsigned long long int var_10 = 8191220494140987957ULL;
int var_11 = -1402323111;
unsigned short var_12 = (unsigned short)33186;
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
