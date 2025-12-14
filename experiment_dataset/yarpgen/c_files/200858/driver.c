#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8299613517533956335LL;
unsigned int var_3 = 2311523879U;
signed char var_11 = (signed char)-88;
int zero = 0;
unsigned long long int var_13 = 4102059067856643596ULL;
long long int var_14 = 692979100941220449LL;
void init() {
}

void checksum() {
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
