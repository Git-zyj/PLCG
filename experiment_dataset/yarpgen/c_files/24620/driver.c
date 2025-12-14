#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)51;
unsigned short var_9 = (unsigned short)59853;
int zero = 0;
signed char var_19 = (signed char)-7;
int var_20 = -1682195542;
unsigned long long int var_21 = 17536694006493893772ULL;
unsigned long long int var_22 = 7529348670535469865ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
