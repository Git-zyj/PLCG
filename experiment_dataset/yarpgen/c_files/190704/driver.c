#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 864714239106297677ULL;
unsigned int var_8 = 2502960934U;
long long int var_16 = 6470207835999756314LL;
int zero = 0;
long long int var_20 = -308930024997767901LL;
unsigned int var_21 = 1476855093U;
unsigned long long int var_22 = 8966150891830531382ULL;
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
