#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16925402924836630286ULL;
int var_4 = 235425703;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1421053740U;
long long int var_12 = -9086738827207836113LL;
signed char var_13 = (signed char)81;
void init() {
}

void checksum() {
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
