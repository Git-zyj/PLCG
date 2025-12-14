#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4883861873709988138LL;
long long int var_1 = -7966576546205320120LL;
long long int var_8 = 8557028576551860980LL;
long long int var_11 = -8206104725715011753LL;
int zero = 0;
long long int var_16 = -995557823244985014LL;
long long int var_17 = -2963091620882123112LL;
void init() {
}

void checksum() {
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
