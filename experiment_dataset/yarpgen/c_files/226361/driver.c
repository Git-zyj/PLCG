#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -404027406201779859LL;
long long int var_2 = 5235324846074271597LL;
long long int var_6 = 7790304513903341216LL;
signed char var_7 = (signed char)-45;
int zero = 0;
unsigned int var_10 = 2959049715U;
short var_11 = (short)13635;
unsigned int var_12 = 1974088682U;
unsigned int var_13 = 519234388U;
long long int var_14 = -479075550494074882LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
