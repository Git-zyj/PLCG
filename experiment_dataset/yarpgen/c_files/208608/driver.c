#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17143658476485898586ULL;
unsigned int var_10 = 22395931U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_18 = 7885662295059408019LL;
int var_19 = -555463777;
unsigned int var_20 = 4235116607U;
unsigned int var_21 = 842992733U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
