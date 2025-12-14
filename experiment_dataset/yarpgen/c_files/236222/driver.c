#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6785944660352716291LL;
short var_3 = (short)10214;
int zero = 0;
unsigned long long int var_16 = 8845559959863864049ULL;
unsigned long long int var_17 = 2796921524220453937ULL;
unsigned long long int var_18 = 11473249782432811230ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
