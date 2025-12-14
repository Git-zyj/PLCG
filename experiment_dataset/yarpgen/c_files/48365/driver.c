#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -5139299695973270191LL;
long long int var_16 = 1586199883989886003LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8558060010520462856LL;
long long int var_19 = 3367000595667248254LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
