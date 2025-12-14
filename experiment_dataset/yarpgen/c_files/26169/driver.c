#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1489192216003310643LL;
_Bool var_4 = (_Bool)0;
int var_5 = 1154911527;
long long int var_9 = 7725437435337388413LL;
int zero = 0;
unsigned long long int var_13 = 15523750418702530153ULL;
unsigned long long int var_14 = 10609310521047419873ULL;
unsigned char var_15 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
