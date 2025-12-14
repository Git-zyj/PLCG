#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -505874263;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 2150079184U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2730884760134150213ULL;
void init() {
}

void checksum() {
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
