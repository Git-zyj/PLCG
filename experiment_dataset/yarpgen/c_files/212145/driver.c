#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7447218618847190001LL;
_Bool var_1 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14704486790539354982ULL;
long long int var_13 = -7457214236066728249LL;
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
