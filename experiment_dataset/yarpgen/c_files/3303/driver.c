#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned int var_4 = 2769706089U;
int var_9 = -1545346099;
_Bool var_10 = (_Bool)0;
long long int var_15 = -7951705389881607786LL;
int zero = 0;
int var_20 = 1670732743;
long long int var_21 = 3480490691577367816LL;
long long int var_22 = -8633315822133035432LL;
void init() {
}

void checksum() {
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
