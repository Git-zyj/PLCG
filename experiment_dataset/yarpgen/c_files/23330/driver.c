#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
long long int var_4 = 6707483037726628793LL;
unsigned long long int var_11 = 17383225410334485459ULL;
int zero = 0;
unsigned int var_14 = 3590648660U;
signed char var_15 = (signed char)-39;
long long int var_16 = -6992144752214287574LL;
void init() {
}

void checksum() {
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
