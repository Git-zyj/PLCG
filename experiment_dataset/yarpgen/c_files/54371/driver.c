#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -4690071536610769097LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 14089034306406765515ULL;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3909573551U;
unsigned long long int var_11 = 17069572903431003294ULL;
unsigned int var_12 = 3740206047U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
