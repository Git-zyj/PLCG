#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned long long int var_9 = 5326092361384660927ULL;
short var_15 = (short)918;
int zero = 0;
unsigned short var_19 = (unsigned short)33125;
long long int var_20 = -4674956391776951275LL;
signed char var_21 = (signed char)19;
unsigned int var_22 = 3837427272U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
