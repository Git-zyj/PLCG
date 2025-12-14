#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8413589063280704786LL;
int var_1 = -2091524521;
signed char var_15 = (signed char)95;
int zero = 0;
unsigned int var_20 = 1054506323U;
short var_21 = (short)9509;
long long int var_22 = -4047942928193050543LL;
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
