#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-119;
unsigned long long int var_4 = 16578257931790727777ULL;
long long int var_6 = 6783207121333936700LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3844053561U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7428296352555617575ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
