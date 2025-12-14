#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4200626237U;
unsigned long long int var_3 = 6888958895822859605ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3115125648U;
int zero = 0;
int var_14 = -1450432465;
short var_15 = (short)-635;
void init() {
}

void checksum() {
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
