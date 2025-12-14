#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4155342588U;
unsigned short var_2 = (unsigned short)6903;
_Bool var_4 = (_Bool)0;
short var_7 = (short)23825;
long long int var_8 = 9122836501570759937LL;
unsigned long long int var_9 = 15625815111171688426ULL;
int zero = 0;
long long int var_10 = -7960895505489176381LL;
unsigned int var_11 = 2471758045U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
