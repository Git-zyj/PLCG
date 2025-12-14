#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned long long int var_8 = 4477341002765431244ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18137431854862579481ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 874334189;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
