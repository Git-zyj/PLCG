#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37897;
_Bool var_9 = (_Bool)1;
long long int var_11 = 1551056761283627049LL;
int zero = 0;
unsigned int var_18 = 2973164612U;
unsigned long long int var_19 = 6349361485181631629ULL;
long long int var_20 = -5328328912769433049LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
