#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1449919539U;
unsigned long long int var_4 = 8921571528229967386ULL;
signed char var_5 = (signed char)-89;
unsigned int var_6 = 3932588948U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2403258029415513682ULL;
long long int var_13 = 4302010899152995952LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
