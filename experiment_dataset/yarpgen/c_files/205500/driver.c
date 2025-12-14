#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1123487615;
signed char var_5 = (signed char)-77;
unsigned long long int var_6 = 12063572144003888596ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1289135453U;
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
