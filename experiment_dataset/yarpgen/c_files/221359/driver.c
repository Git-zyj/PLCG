#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -452084166;
int var_4 = -786835775;
int var_5 = -1812957492;
int var_6 = 2055529352;
int var_9 = -667520914;
int var_10 = 1115138895;
int zero = 0;
int var_12 = -886849184;
int var_13 = 549716605;
int var_14 = 1194703347;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
