#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2490254208269746580ULL;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15923059203173842447ULL;
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
