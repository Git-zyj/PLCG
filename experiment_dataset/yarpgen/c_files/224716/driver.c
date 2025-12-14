#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2396710087U;
long long int var_7 = 8133523972906132183LL;
unsigned long long int var_8 = 5813746169658466567ULL;
int var_12 = 1898387817;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1813491647;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
