#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8351711790885616113LL;
long long int var_9 = -6820542745088727528LL;
short var_11 = (short)-27423;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-50;
unsigned int var_14 = 3060725708U;
unsigned int var_15 = 671612390U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
