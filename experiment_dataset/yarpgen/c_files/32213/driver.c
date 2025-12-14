#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9655676571005645758ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4582486203214967767LL;
int zero = 0;
unsigned long long int var_14 = 4405153258252825383ULL;
unsigned long long int var_15 = 16072480857786074892ULL;
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
