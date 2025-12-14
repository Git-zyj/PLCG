#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8041141164570403481LL;
long long int var_8 = -2454616583444969309LL;
unsigned long long int var_11 = 1760852018238519795ULL;
unsigned long long int var_16 = 16158911923861365514ULL;
long long int var_19 = 6847567353557664250LL;
int zero = 0;
unsigned long long int var_20 = 2017457183970767202ULL;
unsigned long long int var_21 = 14002910726931479813ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
