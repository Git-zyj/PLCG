#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-81;
unsigned char var_7 = (unsigned char)193;
int zero = 0;
unsigned long long int var_13 = 14865790405208302084ULL;
unsigned char var_14 = (unsigned char)36;
long long int var_15 = 8223417611484049793LL;
long long int var_16 = 7967354293878967889LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
