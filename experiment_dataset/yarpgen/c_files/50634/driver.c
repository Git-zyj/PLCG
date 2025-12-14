#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)115;
unsigned long long int var_6 = 14642017526080919428ULL;
long long int var_10 = 7538802318916075874LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 14656600055014572786ULL;
unsigned char var_15 = (unsigned char)146;
long long int var_16 = 5459682273626412704LL;
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
