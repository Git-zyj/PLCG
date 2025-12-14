#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
int var_2 = 1765341883;
unsigned int var_4 = 2089363464U;
signed char var_5 = (signed char)-42;
int var_6 = -975249373;
unsigned long long int var_8 = 7008621743068104306ULL;
unsigned long long int var_12 = 14261697328045701621ULL;
unsigned long long int var_13 = 14656403567449701669ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)95;
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
