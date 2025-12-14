#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 850081351337530765LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5520476486958411844LL;
unsigned long long int var_3 = 6052497695487072100ULL;
int var_5 = 66726088;
long long int var_7 = -134956762051354857LL;
unsigned int var_9 = 3140200015U;
int zero = 0;
signed char var_10 = (signed char)42;
long long int var_11 = -308707421167502672LL;
signed char var_12 = (signed char)25;
long long int var_13 = 1249172365421203613LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
