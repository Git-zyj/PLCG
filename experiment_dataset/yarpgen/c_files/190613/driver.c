#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7542749843042200805LL;
int var_2 = -1843880706;
unsigned int var_4 = 1742709048U;
int zero = 0;
short var_13 = (short)12714;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 569020071U;
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
