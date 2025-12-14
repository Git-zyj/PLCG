#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
long long int var_5 = 3136638885385095096LL;
short var_6 = (short)-16841;
unsigned long long int var_7 = 12807031043706554389ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)47;
unsigned long long int var_18 = 4356829999433359142ULL;
unsigned int var_19 = 4129209559U;
long long int var_20 = -5173493227677090308LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
