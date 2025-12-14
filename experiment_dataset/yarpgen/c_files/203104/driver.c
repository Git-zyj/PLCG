#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5384083529592560315LL;
long long int var_2 = 3749660089000847839LL;
_Bool var_3 = (_Bool)0;
unsigned int var_9 = 1070314341U;
int zero = 0;
signed char var_10 = (signed char)83;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4052218484U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
