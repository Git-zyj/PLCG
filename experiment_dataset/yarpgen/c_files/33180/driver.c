#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8145489285230819452LL;
int var_5 = 487317207;
unsigned int var_8 = 3120612806U;
int zero = 0;
unsigned int var_19 = 1158511249U;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3743531241411239078LL;
void init() {
}

void checksum() {
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
