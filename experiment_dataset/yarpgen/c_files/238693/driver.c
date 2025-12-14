#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-10;
unsigned char var_9 = (unsigned char)245;
unsigned long long int var_12 = 2717583779109715768ULL;
int zero = 0;
int var_14 = -1194993830;
unsigned long long int var_15 = 1525755364843363600ULL;
long long int var_16 = 4247085722018082902LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
