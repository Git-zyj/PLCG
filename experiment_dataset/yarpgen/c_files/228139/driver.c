#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3815041055U;
unsigned short var_5 = (unsigned short)65391;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 8012077421418961304ULL;
signed char var_14 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
