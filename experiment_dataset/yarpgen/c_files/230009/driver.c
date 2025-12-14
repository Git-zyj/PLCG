#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2011965787U;
unsigned long long int var_8 = 4787284201108982093ULL;
long long int var_9 = 1368145782254101704LL;
unsigned int var_12 = 441449650U;
unsigned int var_14 = 859559058U;
unsigned long long int var_16 = 1657832281698239490ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -337475299188703607LL;
signed char var_19 = (signed char)13;
unsigned int var_20 = 1061002858U;
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
